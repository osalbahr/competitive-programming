#!/usr/bin/env python3

import sys

grid = [line.strip() for line in sys.stdin]

total = 0
all_positions = set()
for i in range(len(grid)):
    if i == 0:
        all_positions.add(grid[i].find("S"))
        continue

    new_positions = set()
    for pos in all_positions:
        if grid[i][pos] == "^":
            new_positions.add(pos - 1)
            new_positions.add(pos + 1)
            total += 1
        else:
            new_positions.add(pos)

    all_positions = new_positions

print(total)
