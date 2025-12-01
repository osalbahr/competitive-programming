#!/usr/bin/env python3

import sys

total_zero = 0
position = 50
for line in sys.stdin:
    direction = line[0]
    count = int(line[1:])

    if direction == "R":
        position += count
        position %= 100
    else:
        position -= count
        while position < 0:
            position += 100
    
    if position == 0:
        total_zero += 1

print(total_zero)
