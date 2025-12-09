#!/usr/bin/env python3

import sys

grid = []

for line in sys.stdin:
    col, row = map(int, line.split(","))
    grid.append((row, col))

max_area = -1
for i in range(len(grid)):
    for j in range(i + 1, len(grid)):
        d_row = abs(grid[i][0] - grid[j][0]) + 1
        d_col = abs(grid[i][1] - grid[j][1]) + 1

        max_area = max(max_area, d_row * d_col)

print(max_area)
