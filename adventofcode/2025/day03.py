#!/usr/bin/env python3

import sys

total = 0
for joltages in sys.stdin:
    joltages = joltages.strip()

    current_max = -1
    for i in range(9, -1, -1):
        if (idx1 := joltages.find(str(i))) == -1 or idx1 > len(joltages) - 2:
            continue

        for j in range(9, -1, -1):
            if (idx2 := joltages.find(str(j), idx1 + 1)) == -1 or idx2 > len(joltages) - 2 + 1:
                continue

            current_max = max(current_max, int(joltages[idx1] + joltages[idx2]))
            break
        
        break

    total += current_max

print(total)
