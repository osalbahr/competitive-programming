#!/usr/bin/env python3

import sys

grid = []

for line in sys.stdin:
    grid.append([ch for ch in line.strip()])


def adjacent_count(grid, r, c):
    count = 0
    for r_diff in range(-1, 1 + 1):
        for c_diff in range(-1, 1 + 1):
            if r + r_diff < 0 or r + r_diff >= len(grid):
                continue

            if c + c_diff < 0 or c + c_diff >= len(grid[0]):
                continue

            if grid[r + r_diff][c + c_diff] == "@":
                count += 1

    return count


def able_to_remove(grid):
    for r in range(len(grid)):
        for c in range(len(grid[0])):
            if grid[r][c] == "@" and adjacent_count(grid, r, c) <= 4:
                grid[r][c] = "x"
                return True

    return False


total = 0
while able_to_remove(grid):
    total += 1

print(total)
