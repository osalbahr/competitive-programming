#!/usr/bin/env python3

import sys

total = 0

for line in sys.stdin:
    dims = sorted(map(int, line.strip().split("x")))

    surface = dims[0] * dims[1]
    surface += dims[0] * dims[2]
    surface += dims[1] * dims[2]
    surface *= 2

    total += surface + dims[0] * dims[1]

print(total)
