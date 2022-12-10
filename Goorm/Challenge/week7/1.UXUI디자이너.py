N,M = map(int,input().split())

cnt = [0] * (N+1)
for _ in range(M):
    k, *lst = map(int,input().split())
    for x in lst:
        cnt[x] += 1
    
MAX = 0
ARG = []
for i,x in enumerate(cnt):
    if MAX < x:
        MAX = x
        ARG = [i]
    elif MAX == x:
        ARG.append(i)
        
for x in reversed(ARG):
    print(x,end=' ')