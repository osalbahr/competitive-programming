#!/usr/bin/env python3

import sys

grid = [line.strip() for line in sys.stdin]

total = 0
all_paths = set()
for i in range(len(grid)):
    if i == 0:
        all_paths.add((grid[i].find("S"),))
        continue

    new_paths = set()
    for path in all_paths:
        pos = path[-1]
        if grid[i][pos] == "^":
            new_paths.add((*path, pos - 1))
            new_paths.add((*path, pos + 1))
        else:
            new_paths.add((*path, pos))

    all_paths = new_paths

print(len(all_paths))
