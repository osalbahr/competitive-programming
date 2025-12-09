#!/usr/bin/env python3

import sys
from shapely.geometry import Point
from shapely.geometry.polygon import Polygon

grid = set()

for line in sys.stdin:
    col, row = map(int, line.split(","))
    grid.add((row, col))

min_row = min([point[0] for point in grid]) - 1
max_row = max([point[0] for point in grid]) + 1

min_col = min([point[1] for point in grid]) - 2
max_col = max([point[1] for point in grid]) + 2

for row_idx in range(min_row, max_row + 1):
    for col_idx in range(min_col, max_col + 1):
        if (row_idx, col_idx) in grid:
            print("#", end="")
        else:
            print(".", end="")

    print()

print(max_col - min_col + 1)
