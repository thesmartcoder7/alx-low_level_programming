#!/bin/bash
wget -P .. https://raw.github.com/thesmartcoder7/alx-low_level_programming/master/0x18-dynamic_libraries/win_giga.so
export LD_PRELOAD="$PWD/../win_giga.so"
