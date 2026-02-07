#!/usr/bin/env python3

import sys

floor = 0

for line in sys.stdin:
    for ch in line.strip():
        if ch == "(":
            floor += 1
        else: # ch == ")"
            floor -= 1

print(floor)
