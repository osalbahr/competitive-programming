#!/usr/bin/env python3


def solve():
    a = list(map(int, input().split()))
    print(-1 * sum(a) + 2 * max(a))


for _ in range(int(input())):
    solve()
