N = int(input())

ans = 1

INPUT = map(int,input().split())

for i in INPUT:
    ans *= i

print(ans)