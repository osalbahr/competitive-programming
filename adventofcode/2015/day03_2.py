#!/usr/bin/env python3

import sys

positions = set()

row = 0
col = 0

robo_row = 0
robo_col = 0

positions.add((row, col))

for line in sys.stdin:
    line = line.strip()
    for i in range(len(line)):
        arrow = line[i]

        if i % 2 == 0:
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
        else:
            match arrow:
                case ">":
                    robo_col += 1
                case "v":
                    robo_row += 1
                case "<":
                    robo_col -= 1
                case "^":
                    robo_row -= 1
            positions.add((robo_row, robo_col))

print(len(positions))
