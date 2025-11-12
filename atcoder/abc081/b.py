def main():
    n = input()
    a = input().split()
    
    total = 0
    while all_even(a):
        total += 1
        new_a = []
        for n in a:
            new_a.append(int(n) / 2)
        
        a = new_a
    
    print(total)


def all_even(l):
    for n in l:
        if int(n) % 2 == 1:
            return False
    
    return True


if __name__ == "__main__":
    main()
