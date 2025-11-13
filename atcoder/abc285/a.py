#!/usr/bin/env python3

a, b = sorted([int(x) for x in input().split()])

if b == 2 * a or b == 2 * a + 1:
    print("Yes")
else:
    print("No")
