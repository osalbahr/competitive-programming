#!/usr/bin/env python3

import sys

total = 0
for joltages in sys.stdin:
    current_max = -1
    for i in range(len(joltages) - 1):
        for j in range(i + 1, len(joltages)):
            current_max = max(current_max, int(joltages[i] + joltages[j]))

    total += current_max

print(total)
