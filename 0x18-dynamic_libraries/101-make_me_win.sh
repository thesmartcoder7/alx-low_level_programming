#!/bin/bash
wget -P .. https://raw.githubusercontent.com/thesmartcoder7/alx-low_level_programming/main/0x18-dynamic_libraries/win_giga.so
export LD_PRELOAD="$PWD/../win_giga.so"