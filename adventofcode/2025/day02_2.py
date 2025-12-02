#!/usr/bin/env python3

import sys


def main():
    total = 0
    for line in sys.stdin:
        for period in line.split(","):
            start, end = map(int, period.split("-"))
            for i in range(start, end + 1):
                if not is_valid(str(i)):
                    total += i

    print(total)


def is_valid(n_str):
    for i in range(1, len(n_str) // 2 + 1):
        if len(n_str) % i != 0:
            continue

        slices = set()
        for j in range(0, len(n_str), i):
            slices.add(n_str[j : j + i])
            if len(slices) > 1:
                break

        if len(slices) == 1:
            return False

    return True


if __name__ == "__main__":
    main()
