#!/usr/bin/env python3

def main():
    t = int(input())
    for i in range(t):
        print(solve())


def solve():
    n, s = input().split()
    n = int(n)
    s = int(s)

    l = [int(x) for x in input().split()]

    if n == 1:
        return abs(s - l[0])

    l = sorted(l)
    
    return min(go_left(l, s), go_right(l, s))


def go_left(l, s):
    total = 0
    if (s > l[0]):
        total += 2 * (s - l[0])

    total += l[len(l) - 1] - s

    return total

def go_right(l, s):
    total = 0
    if (s < l[len(l) - 1]):
        total += 2 * (l[len(l) - 1] - s)

    total += s - l[0]

    return total

if __name__ == "__main__":
    main()
