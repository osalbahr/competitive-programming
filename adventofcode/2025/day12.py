#!/usr/bin/env python3

import sys

total = 0

for line in sys.stdin:
    if "x" not in line:
        continue

    dimensions, shapes = line.split(":")
    width, height = map(int, dimensions.split("x"))

    print(width * height)
    print(9 * sum(map(int, shapes.split())))
    print()

    if width * height >= 9 * sum(map(int, shapes.split())):
        total += 1


print(total)
