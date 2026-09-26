def solve():
    arr = list(map(int, input().split()))

    ans = 0
    while len(set(arr)) > 2:
        ans += 1
        arr = sorted(arr)
        arr[0] += 1
        arr[2] -= 1

    print(ans)


for _ in range(int(input())):
    solve()
