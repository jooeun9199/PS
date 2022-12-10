lst = list(map(int, input().split()))

lst.sort()

ans = lst[-1]-lst[0] + lst[-2]-lst[1]

print(ans)