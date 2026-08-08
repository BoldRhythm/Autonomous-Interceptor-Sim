#!/usr/bin/env bash

INSTANCE=$1
POSE=$2

if [[ "$INSTANCE" -gt 1 ]]; then
	PX4_GZ_STANDALONE=1 PX4_SYS_AUTOSTART=4012 PX4_GZ_MODEL_POSE=$POSE PX4_SIM_MODEL=gz_interceptor_x500 ./build/px4_sitl_default/bin/px4 -i "$INSTANCE"
else
	PX4_SYS_AUTOSTART=4012 PX4_SIM_MODEL=gz_interceptor_x500 ./build/px4_sitl_default/bin/px4 -i "$INSTANCE"
fi


