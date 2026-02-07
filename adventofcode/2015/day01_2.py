#!/usr/bin/env python3

import sys

floor = 0
pos = 1

for line in sys.stdin:
    for ch in line.strip():
        if ch == "(":
            floor += 1
        else: # ch == ")"
            floor -= 1

        if floor == -1:
            break
            
        pos += 1

print(pos)
