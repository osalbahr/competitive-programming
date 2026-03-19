#!/usr/bin/env python3

import sys

total = 0

for line in sys.stdin:
    line = line.strip()
    literal_count = len(line)
    
    i = 1
    in_memory_count = 0
    while i < len(line) - 1:
        # Normal character
        if line[i] != "\\":
            in_memory_count += 1
            i += 1
            continue
        
        if line[i + 1] == "x":
            in_memory_count += 1
            i += 4
            continue

        # Normal escape
        in_memory_count += 1
        i += 2

    total += literal_count - in_memory_count

print(total)
