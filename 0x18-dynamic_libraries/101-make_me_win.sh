#!/bin/bash
wget -P /tmp/ https://raw.github.com/thesmartcoder7/alx-low_level_programming/main/0x18-dynamic_libraries/win_giga.so
export LD_PRELOAD=/tmp/win_giga.so