#!/usr/bin/env python3

import sys

total = 0
for joltages in sys.stdin:
    current_max = -1
    for i in range(1, 9 + 1):
        if (idx1 := joltages.find(str(i))) == -1:
            continue

        for j in range(1, 9 + 1):
            if (idx2 := joltages.find(str(j), idx1 + 1)) == -1:
                continue

            current_max = max(current_max, int(joltages[idx1] + joltages[idx2]))

    total += current_max

print(total)
