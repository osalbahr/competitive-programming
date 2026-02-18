#!/usr/bin/env python3

import sys

grid = []
for i in range(1000):
    row = []
    for j in range(1000):
        row.append(0)
    
    grid.append(row)

for line in sys.stdin:
    words = line.split()

    if words[0] == "turn":
        command = words[0] + " " + words[1]
    else:
        command = words[0]
    
    corner_one = list(map(int, words[-1].split(",")))
    corner_two = list(map(int, words[-3].split(",")))

    min_row = min(corner_one[0], corner_two[0])
    max_row = max(corner_one[0], corner_two[0])

    min_col = min(corner_one[1], corner_two[1])
    max_col = max(corner_one[1], corner_two[1])
    
    for i in range(min_row, max_row + 1):
        for j in range(min_col, max_col + 1):
            match command:
                case "turn on":
                    grid[i][j] = 1
                case "turn off":
                    grid[i][j] = 0
                case "toggle":
                    if grid[i][j] == 0:
                        grid[i][j] = 1
                    else:
                        grid[i][j] = 0

total = 0
for row in grid:
    for ch in row:
        if ch == 1:
            total += 1

print(total)
