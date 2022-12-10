import heapq
from collections import defaultdict
N,M = map(int,input().split())
A = [-1]+list(map(int,input().split()))
edges = [[] for _ in range(N+1)]
for _ in range(M):
    u,v,w = map(int,input().split())
    edges[u].append((v,w))
    edges[v].append((u,w))
    

queue = []

for x,w in edges[1]:
    heapq.heappush(queue,(w,1,x))

visited = [defaultdict(bool) for _ in range(N+1)]
ans = -1

while queue:
    cost, prev, cur  = heapq.heappop(queue)
    
    if cur == N:
        ans = cost
        break
    
    if not visited[cur][prev%A[cur]] or visited[cur][prev%A[cur]] > cost:
        visited[cur][prev%A[cur]] = cost
    else:
        continue
    
    
    for nxt,w in edges[cur]:
        if prev%A[cur]==nxt%A[cur]:
            heapq.heappush(queue,(cost+w,cur,nxt))

print(ans)