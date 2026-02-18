#!/usr/bin/env python3

import sys

vowels = {"a", "e", "i", "o", "u"}
invalid_combos = ["ab", "cd", "pq", "xy"]

count = 0

for line in sys.stdin:
    vowel_count = 0
    for ch in line:
        if ch in vowels:
            vowel_count += 1
    
    if vowel_count < 3:
        continue
    
    has_double_letter = False
    for i in range(len(line) - 1):
        if line[i] == line[i + 1]:
            has_double_letter = True
    
    if not has_double_letter:
        continue

    has_invalid_combo = False
    for combo in invalid_combos:
        if combo in line:
            has_invalid_combo = True
    
    if has_invalid_combo:
        continue

    count += 1

print(count)
