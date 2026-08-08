#!/usr/bin/env bash

SESSION="interceptor"

INTERVAL=0.2
MAX_ITERATIONS=300

# -----------------------
# Helper functions
# -----------------------

wait_for_output() {
    local pane="$1"
    local pattern="$2"

    local elapsed=0

    echo "Waiting for '$pattern' in $pane..."

    while ! tmux capture-pane -p -S - -t "$pane" | grep -qF "$pattern"; do
        sleep "$INTERVAL"
        ((elapsed++))

        if (( elapsed >= MAX_ITERATIONS )); then
            echo "Timed out waiting for '$pattern' in $pane."
            return 1
        fi
    done

    echo "Detected '$pattern' in $pane."
}

# -----------------------
# Reattach if session exists
# -----------------------

if tmux has-session -t "$SESSION" 2>/dev/null; then
    tmux attach -t "$SESSION"
    exit 0
fi

# -----------------------
# Create session
# -----------------------

tmux new-session -d -s "$SESSION"

# -----------------------
# Pane 0 : DDS
# -----------------------

DDS_PANE=$(tmux display-message -p -t "$SESSION:0.0" "#{pane_id}")

tmux send-keys -t "$DDS_PANE" \
"source ~/ros2_px4_ws/install/setup.bash && MicroXRCEAgent udp4 -p 8888" C-m

# -----------------------
# Pane 1 : QGroundControl
# -----------------------

tmux split-window -h -t "$DDS_PANE"
QGC_PANE=$(tmux display-message -p "#{pane_id}")

tmux send-keys -t "$QGC_PANE" \
"cd ~/Downloads && ./QGroundControl-x86_64.AppImage" C-m

# -----------------------
# Pane 2 : PX4 #1
# -----------------------

tmux split-window -h -t "$QGC_PANE"
PX4_1_PANE=$(tmux display-message -p "#{pane_id}")

tmux send-keys -t "$PX4_1_PANE" \
"cd ~/PX4-Autopilot && ./custom-shell-scripts/start_px4.sh 1" C-m

# -----------------------
# Pane 3 : PX4 #2 (empty)
# -----------------------

tmux split-window -v -t "$PX4_1_PANE"
HTOP_PANE=$(tmux display-message -p "#{pane_id}")

# -----------------------
# Pane 4 : htop
# -----------------------

tmux split-window -v -t "$DDS_PANE"
PX4_2_PANE=$(tmux display-message -p "#{pane_id}")

tmux send-keys -t "$HTOP_PANE" \
"htop" C-m

# -----------------------
# Layout
# -----------------------

tmux select-layout tiled #to avoid dependance of pane geometry on split order

# -----------------------
# Background orchestrator
# -----------------------

(
    wait_for_output \
        "$PX4_1_PANE" \
        "Ready for takeoff!" || exit 1

    tmux send-keys -t "$PX4_2_PANE" \
        "cd ~/PX4-Autopilot && ./custom-shell-scripts/start_px4.sh 2 '0,1'" C-m

) &

# -----------------------
# Attach
# -----------------------

tmux attach -t "$SESSION"
