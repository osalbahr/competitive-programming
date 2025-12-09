#!/usr/bin/env python3

import sys
from shapely.geometry import Point
from shapely.geometry.polygon import Polygon

# Array of point tuples
grid_array = []
for line in sys.stdin:
    col, row = map(int, line.split(","))
    grid_array.append((row, col))

# Populate "green" tile lines
green_lines = set()
for i in range(len(grid_array)):
    start_row = min(grid_array[i][0], grid_array[i - 1][0])
    end_row = max(grid_array[i][0], grid_array[i - 1][0])
    start_col = min(grid_array[i][1], grid_array[i - 1][1])
    end_col = max(grid_array[i][1], grid_array[i - 1][1])

    for row_idx in range(start_row, end_row + 1):
        for col_idx in range(start_col, end_col + 1):
            green_lines.add((row_idx, col_idx))

# Construct the polygon
polygon = Polygon([Point(row, col) for row, col in grid_array])

# O(1) point tuples lookup
grid_set = set(grid_array)

def is_red(grid_set, row_idx, col_idx):
    return (row_idx, col_idx) in grid_set

def is_green(green_lines, row_idx, col_idx):
    return (row_idx, col_idx) in green_lines or polygon.contains(Point(row_idx, col_idx))

min_row = min([point[0] for point in grid_array]) - 1
max_row = max([point[0] for point in grid_array]) + 1

min_col = min([point[1] for point in grid_array]) - 2
max_col = max([point[1] for point in grid_array]) + 2

for row_idx in range(min_row, max_row + 1):
    for col_idx in range(min_col, max_col + 1):
        if is_red(grid_set, row_idx, col_idx):
            print("#", end="")
        elif is_green(green_lines, row_idx, col_idx):
            print("X", end="")
        else:
            print(".", end="")

    print()
