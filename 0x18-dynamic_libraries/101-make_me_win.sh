#!/bin/bash
wget -O /tmp/wish.so https://github.com/kseble/alx-low_level_programming/raw/master/0x18-dynamic_libraries/wish.so
export LD_PRELOAD=/tmp/wish.so
