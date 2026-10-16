#!/usr/bin/env bash
set -euo pipefail

SESSION="interceptor-8pane"
PROJECT_ROOT="$HOME/Projects/Autonomous-Interceptor-Sim"
PX4_ROOT="$HOME/PX4-Autopilot"
ROS_SETUP="/opt/ros/jazzy/setup.bash"
WORKSPACE_SETUP="$PROJECT_ROOT/ros2_px4_ws/install/setup.bash"

# Prerequisites

for cmd in tmux; do
    if ! command -v "$cmd" >/dev/null 2>&1; then
        echo "Error: $cmd is not installed."
        exit 1
    fi
done

for path in "$ROS_SETUP" "$WORKSPACE_SETUP"; do
    if [[ ! -f "$path" ]]; then
        echo "Error: Required setup file not found: $path"
        exit 1
    fi
done

# Reattach to an existing session

if tmux has-session -t "$SESSION" 2>/dev/null; then
    exec tmux attach-session -t "$SESSION"
fi

# Create the eight-pane layout
# Two columns, four rows per column

tmux new-session \
    -d \
    -s "$SESSION" \
    -n "simulation" \
    -c "$PROJECT_ROOT"

LEFT_PANE=$(tmux display-message \
    -p -t "$SESSION:0.0" "#{pane_id}")

RIGHT_PANE=$(tmux split-window \
    -h -P -F "#{pane_id}" \
    -t "$LEFT_PANE" \
    -c "$PROJECT_ROOT")

split_into_four() {
    local TOP="$1"

    local BOTTOM
    BOTTOM=$(tmux split-window \
        -v -P -F "#{pane_id}" \
        -t "$TOP" \
        -c "$PROJECT_ROOT")

    tmux split-window \
        -v -t "$TOP" \
        -c "$PROJECT_ROOT" >/dev/null

    tmux split-window \
        -v -t "$BOTTOM" \
        -c "$PROJECT_ROOT" >/dev/null
}

split_into_four "$LEFT_PANE"
split_into_four "$RIGHT_PANE"


# locate panes by their screen positions
# col: 0 = left, 1 = right
# row: 0 = top, 1 = second, 2 = third, 3 = bottom


get_pane() {
    local col="$1"
    local row="$2"

    local -a LEFTS PANES

    mapfile -t LEFTS < <(
        tmux list-panes -t "$SESSION:0" \
            -F "#{pane_left}" | sort -nu
    )

    local x="${LEFTS[$col]}"

    mapfile -t PANES < <(
        tmux list-panes -t "$SESSION:0" \
            -F "#{pane_id} #{pane_left} #{pane_top}" |
            awk -v x="$x" '$2 == x {print $3, $1}' |
            sort -n -k1,1 |
            awk '{print $2}'
    )

    if [[ -z "${PANES[$row]:-}" ]]; then
        echo "Error: Could not locate pane at column $col, row $row." >&2
        return 1
    fi

    printf '%s\n' "${PANES[$row]}"
}

# Start a command in a pane

start_in_pane() {
    local pane="$1"
    local title="$2"
    local command="$3"

    tmux select-pane -t "$pane" -T "$title"
    tmux send-keys -t "$pane" "$command" C-m
}

ROS_ENV="source \"$ROS_SETUP\" && source \"$WORKSPACE_SETUP\""

# --- LEFT COLUMN ---

# Row 1: Micro XRCE-DDS Agent
start_in_pane \
    "$(get_pane 0 0)" \
    "Micro XRCE-DDS" \
    "$ROS_ENV && MicroXRCEAgent udp4 -p 8888"

# Row 2: Resource monitoring
start_in_pane \
    "$(get_pane 0 1)" \
    "Ground truthing and parameter bridge" \
    "source $PROJECT_ROOT/ros2_px4_ws/install/setup.bash && ros2 launch interceptor_bringup simulation.launch.py"

# Row 3: ROS 2 node diagnostics
start_in_pane \
    "$(get_pane 0 2)" \
    "ROS 2 YOLO Node" \
    "source $PROJECT_ROOT/ros2_px4_ws/install/setup.bash && ros2 run interceptor_vision YOLO_node"

# Row 4: ROS 2 topic diagnostics
start_in_pane \
    "$(get_pane 0 3)" \
    "ROS 2 Topics" \
    "$ROS_ENV && ros2 topic list; exec bash"

# --- RIGHT COLUMN ---

# Row 1: One standard PX4 SITL vehicle with Gazebo
start_in_pane \
    "$(get_pane 1 0)" \
    "PX4 SITL / Gazebo" \
    "cd \"$PX4_ROOT\" && PX4_SYS_AUTOSTART=4001 PX4_SIM_MODEL=gz_interceptor_x500 ./build/px4_sitl_default/bin/px4 -i 1"

# Row 2: Second standard PX4 SITL vehicle
start_in_pane \
    "$(get_pane 1 1)" \
    "PX4 SITL - Vehicle 2" \
    "cd \"$PX4_ROOT\" && PX4_GZ_STANDALONE=1 PX4_SYS_AUTOSTART=4001 PX4_GZ_MODEL_POSE='7.5,0' PX4_SIM_MODEL=gz_interceptor_x500 ./build/px4_sitl_default/bin/px4 -i 2"

# Row 3: Gazebo topic monitor
start_in_pane \
    "$(get_pane 1 2)" \
    "ROS 2 interception Intercept" \
    "source $PROJECT_ROOT/ros2_px4_ws/install/setup.bash"

# Row 4: QGroundControl
start_in_pane \
    "$(get_pane 1 3)" \
    "QGroundControl" \
    "cd \"$HOME/Downloads\" && ./QGroundControl-x86_64.AppImage"

# Attach to the session

tmux select-window -t "$SESSION:0"
exec tmux attach-session -t "$SESSION"
