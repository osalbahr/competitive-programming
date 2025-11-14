#!/usr/bin/env python3

a, b = map(int, input().split())

if a <= b and 6 * a >= b:
    print("Yes")
else:
    print("No")
