#!/usr/bin/env python3

import sys

table = {}

def convert(token):
    try:
        return int(token)
    except ValueError:
        return table[token]

for line in sys.stdin:
    tokens = line.strip().split()

    if len(tokens) == 3:
        table[tokens[-1]] = convert(tokens[0])
    elif len(tokens) == 5:
        if tokens[1] == "AND":
            table[tokens[-1]] = convert(tokens[0]) & convert(tokens[2])
        elif tokens[1] == "OR":
            table[tokens[-1]] = convert(tokens[0]) | convert(tokens[2])
        elif tokens[1] == "LSHIFT":
            table[tokens[-1]] = convert(tokens[0]) << convert(tokens[2])
        elif tokens[1] == "LSHIFT":
            table[tokens[-1]] = convert(tokens[0]) >> convert(tokens[2])
    elif len(tokens) == 4:
        table[tokens[-1]] = (~ convert(tokens[1])) & 0xFFFF

print(table["a"])
