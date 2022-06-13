N = int(input())
lst = [int(x) for x in input().split()]

cnt = [0] * 200

for i in range(N):
    for j in range(i+1,N):
        DIF = lst[j] - lst[i]
        cnt[DIF] += 1
print(max(cnt))
            
