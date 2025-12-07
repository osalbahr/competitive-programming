#!/usr/bin/env python3

import sys

grid = [line.strip() for line in sys.stdin]
rows = len(grid)
cols = len(grid[0])

grid_count = [[0 for _ in range(cols)] for _ in range(rows)]
grid_count[0][grid[0].find("S")] = 1

for i in range(rows - 1):
    for j in range(cols):
        count = grid_count[i][j]
        if count > 0:
            if grid[i + 1][j] == "^":
                grid_count[i + 1][j - 1] += count
                grid_count[i + 1][j + 1] += count
            else:
                grid_count[i + 1][j] += count

print(sum(grid_count[rows - 1]))
