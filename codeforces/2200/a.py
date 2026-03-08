#!/usr/bin/env python3

t = int(input())

for _ in range(t):
    n = int(input())
    a = sorted(map(int, input().split()), reverse=True)

    total = 0
    for ai in a:
        if ai == a[0]:
            total += 1
    
    print(total)
