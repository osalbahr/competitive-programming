#!/usr/bin/env python3

n = input()
l = [int(i) for i in input().split()]

l = sorted(l)

print(l[len(l) - 1] - l[0])
