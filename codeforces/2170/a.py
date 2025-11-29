#!/usr/bin/env python3


def solve():
    n = int(input())

    arr = [[0] * n for _ in range(n)]

    for i in range(n ** 2):
        arr[i // n][i % n] =  i + 1

    max_total = 0
    for i in range(n):
        for j in range(n):
            current_total = arr[i][j]

            try:
                if i - 1 >= 0:
                    current_total += arr[i - 1][j]
            except IndexError:
                ...
            
            try:
                current_total += arr[i + 1][j]
            except IndexError:
                ...
            
            try:
                if j - 1 >= 0:
                    current_total += arr[i][j - 1]
            except IndexError:
                ...
            
            try:
                current_total += arr[i][j + 1]
            except IndexError:
                ...

            max_total = max(max_total, current_total)

    print(max_total)


def main():
    t = int(input())
    for i in range(t):
        solve()

if __name__ == "__main__":
    main()
