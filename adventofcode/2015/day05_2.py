#!/usr/bin/env python3

import sys

count = 0

for line in sys.stdin:
    line = line.strip()

    is_condition_one = False
    for i in range(len(line) - 3):
        first_pair = line[i:i + 2]
        for j in range(i + 2, len(line) - 1):
            second_pair = line[j: j + 2]
            if first_pair == second_pair:
                is_condition_one = True
    
    if not is_condition_one:
        continue
    
    is_condition_two = False
    for i in range(len(line) - 2):
        if line[i] == line[i + 2]:
            is_condition_two = True
    
    if not is_condition_two:
        continue
    
    count += 1

print(count)
