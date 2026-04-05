#!/usr/bin/env python3


def solve():
    n = int(input())
    all = [[] for _ in range(n)]

    for i in range(n):
        all[i].append(i + 1)
    
    j = 0
    for i in range(n, 3 * n, 2):
        all[j].append(i + 1)
        all[j].append(i + 2)
        j += 1
    
    for arr in all:
        for num in arr:
            print(num, end=" ")

    print()

for _ in range(int(input())):
    solve()
