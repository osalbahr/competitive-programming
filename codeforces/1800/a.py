#!/usr/bin/env python3

def main():
    t = int(input())
    for i in range(t):
        print(solve())


def solve():
    n = int(input())
    s = input().upper()
    
    if n < 4:
        return "NO"
    
    i = 0
    if s[i] != "M":
        return "NO"
    
    while i < len(s) - 1 and s[i] == "M":
        i += 1
    
    if s[i] != "E":
        return "NO"
    
    while i < len(s) - 1 and s[i] == "E":
        i += 1
    
    if s[i] != "O":
        return "NO"
    
    while i < len(s) - 1 and s[i] == "O":
        i += 1
    
    if s[i] != "W":
        return "NO"
    
    while i < len(s) - 1 and s[i] == "W":
        i += 1
    
    if s[i] != "W":
        return "NO"
    
    return "YES"


if __name__ == "__main__":
    main()
