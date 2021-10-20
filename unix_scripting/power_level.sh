#!/bin/bash
echo "Current battery level"
cat /sys/class/power_supply/BAT1/capacity
