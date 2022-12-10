from collections import deque
N,M,K = map(int,input().split())
edges = [[] for _ in range(N+1)]

for _ in range(M):
    a,b = map(int,input().split())
    edges[a].append(b)
    

visited = [0] * (N+1)
queue = deque([(K,0)])
ans = -1
while queue:
    node, cnt = queue.popleft()
    if node == K and cnt != 0:
        ans = cnt
        break
    
    for nxt in edges[node]:
        if not visited[nxt]:
            queue.append((nxt,cnt+1))
            

print(ans)