#!/usr/bin/env python3

import sys

def get_count(s, i):
    current_char = s[i]
    count = 1

    j = i
    while j < len(s):
        if s[j] != current_char:
            current_char = s[j]
            count += 1
        
        j += 1
    
    j = 0
    while j < i:
        if s[j] != current_char:
            current_char = s[j]
            count += 1
        
        j += 1

    return count

t = int(input())

for i in range(t):
    n = input()
    s = input()

    max_count = 0
    for i in range(len(s)):
        max_count = max(max_count, get_count(s, i))

    print(max_count)
