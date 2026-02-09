#!/usr/bin/env python3

import sys

positions = set()

row = 0
col = 0

positions.add((row, col))

for line in sys.stdin:
    for arrow in line.strip():
        match arrow:
            case ">":
                col += 1
            case "v":
                row += 1
            case "<":
                col -= 1
            case "^":
                row -= 1
        
        positions.add((row, col))

print(len(positions))
