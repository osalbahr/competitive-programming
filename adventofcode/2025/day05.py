#!/usr/bin/env python3

import sys

ranges = []

for line in sys.stdin:
    line = line.strip()

    if line == "":
        break

    ranges.append(line.split("-"))

total_valid = 0
for line in sys.stdin:
    current = int(line.strip())

    for r in ranges:
        start, end = r

        if int(start) <= current <= int(end):
            total_valid += 1
            break

print(total_valid)
