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

def is_red(row_idx, col_idx):
    return (row_idx, col_idx) in grid_set

def is_green(row_idx, col_idx):
    return (row_idx, col_idx) in green_lines or polygon.contains(Point(row_idx, col_idx))

def is_valid(row_idx, col_idx):
    return is_red(row_idx, col_idx) or is_green(row_idx, col_idx)

def is_valid_rectangle(corner1, corner2):
    min_row = min([corner[0] for corner in [corner1, corner2]])
    max_row = max([corner[0] for corner in [corner1, corner2]])
    min_col = min([corner[1] for corner in [corner1, corner2]])
    max_col = max([corner[1] for corner in [corner1, corner2]])

    # Top and bottom rows
    for col_idx in range(min_col, max_col + 1):
        top_point = (min_row, col_idx)
        bottom_point = (max_row, col_idx)

        if not is_valid(*top_point):
            return False
        if not is_valid(*bottom_point):
            return False

    # Left and right columns
    for row_idx in range(min_row, max_row + 1):
        left_point = (row_idx, min_col)
        right_point = (row_idx, max_col)

        if not is_valid(*left_point):
            return False
        if not is_valid(*right_point):
            return False

    return True

max_area = -1
for i in range(len(grid_array)):
    for j in range(i + 1, len(grid_array)):
        print(i, j, "of", len(grid_array))
        corner1 = grid_array[i]
        corner2 = grid_array[j]

        if is_valid_rectangle(corner1, corner2):
            d_row = abs(grid_array[i][0] - grid_array[j][0]) + 1
            d_col = abs(grid_array[i][1] - grid_array[j][1]) + 1

            max_area = max(max_area, d_row * d_col)

print(max_area)
