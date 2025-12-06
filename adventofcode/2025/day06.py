#!/usr/bin/env python3

import sys

lines =[list(line.split()) for line in sys.stdin]

row_count = len(lines)
col_count = len(lines[0])

total = 0

for col_idx in range(col_count):
    col = [line[col_idx] for line in lines]

    operation = col[len(col) - 1]

    if operation == "+":
        current_total = 0
        for row_idx in range(len(col) - 1):
            current_total += int(lines[row_idx][col_idx])
    else:
        current_total = 1
        for row_idx in range(len(col) - 1):
            current_total *= int(lines[row_idx][col_idx])

    total += current_total

print(total)
