#!/usr/bin/env python3

import sys

ranges = []

for line in sys.stdin:
    line = line.strip()

    if line == "":
        break

    ranges.append(list(map(int, line.split("-"))))


ranges.sort()

start, end = ranges[0]
total_valid = end - start + 1
for i in range(1, len(ranges)):
    prev_start, prev_end = ranges[i - 1]
    start, end = ranges[i]

    if end < prev_end:
        continue

    if start <= prev_end:
        start += prev_end - start + 1

    total_valid += end - start + 1

    ranges[i] = [start, end]


print(total_valid)
