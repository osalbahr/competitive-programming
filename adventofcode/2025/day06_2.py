#!/usr/bin/env python3

import sys

rows = [line.strip("\n") for line in sys.stdin]
num_rows = rows[:-1]
operation_row = rows[len(rows) - 1]

positions = []

for i in range(len(operation_row)):
    if operation_row[i] in ["+", "*"]:
        positions.append(i)

col_tuples = []
for i in range(len(positions) - 1):
    col_tuples.append((positions[i], positions[i + 1] - 1))

col_tuples.append((positions[len(positions) - 1], len(num_rows[0]) - 1))

num_groups = []
for start, end in col_tuples:
    num_groups.append([row[start : end + 1] for row in num_rows])

print(num_groups)
