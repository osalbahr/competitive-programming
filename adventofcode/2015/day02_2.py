#!/usr/bin/env python3

import sys
import math

total = 0

for line in sys.stdin:
    dims = sorted(map(int, line.strip().split("x")))

    ribbon = 2 * (dims[0] + dims[1]) + math.prod(dims)

    total += ribbon

print(total)
