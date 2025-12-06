#!/usr/bin/env python3

import sys

rows = [line.strip("\n") for line in sys.stdin]
num_rows = rows[:-1]
operation_row = rows[len(rows) - 1]

symbols = []
positions = []

for i in range(len(operation_row)):
    if operation_row[i] in ["+", "*"]:
        symbols.append(operation_row[i])
        positions.append(i)

col_tuples = []
for i in range(len(positions) - 1):
    col_tuples.append((positions[i], positions[i + 1] - 1))

col_tuples.append((positions[len(positions) - 1], len(num_rows[0]) - 1))

num_groups = []
for start, end in col_tuples:
    num_groups.append([row[start : end + 1] for row in num_rows])


def transform(num_group):
    transformed_group = []
    for i in range(len(num_group[0])):
        current_num = ""
        for row in num_group:
            digit = row[i]
            if digit != " ":
                current_num += digit

        transformed_group.append(current_num)

    return transformed_group


total = 0
for i in range(len(symbols)):
    transformed_nums = transform(num_groups[i])[:-1]
    print(transform(num_groups[i]))

    if symbols[i] == "+":
        current_total = 0
        for num in transformed_nums:
            current_total += int(num)
    else:
        current_total = 1
        for num in transformed_nums:
            current_total *= int(num)

    total += current_total

print(total)
