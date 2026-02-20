#!/usr/bin/env python3

import sys

def convert(token):
    try:
        return int(token)
    except ValueError:
        return table[token]

table = {}
is_evaluated = set()

lines = []

for line in sys.stdin:
    lines.append(line.strip())

while len(lines) > len(is_evaluated):
    for i, line in enumerate(lines):
        if i in is_evaluated:
            continue

        tokens = line.split()

        try:
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

            is_evaluated.add(i)
            print(len(is_evaluated))
            break
        except KeyError:
            continue

print(table)
