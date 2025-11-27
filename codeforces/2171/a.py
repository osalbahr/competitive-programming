#!/usr/bin/env python3


def solve(n):
    if n % 2 != 0:
        return 0

    total = 1
    chicken_count = n / 2
    cow_count = 0

    while chicken_count >= 2:
        chicken_count -= 2
        cow_count += 1
        total += 1
    
    return total


def main():
    for i in range(int(input())):
        n = int(input())
        print(solve(n))


if __name__ == "__main__":
    main()
