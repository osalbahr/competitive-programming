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
    if len(n_str) % 2 != 0:
        return True

    first = n_str[: len(n_str) // 2]
    second = n_str[len(n_str) // 2 :]

    return first != second


if __name__ == "__main__":
    main()
