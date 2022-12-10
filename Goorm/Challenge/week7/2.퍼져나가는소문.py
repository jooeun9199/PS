N = int(input())
M = int(input())

edges = [[] for _ in range(N+1)]
for _ in range(M):
    u,v = map(int,input().split())
    edges[u].append(v)
    edges[v].append(u)

visited = [0] * (N+1)
visited[1] = 1

def dfs(node):
    
    for nxt in edges[node]:
        if not visited[nxt]:
            visited[nxt] = 1
            dfs(nxt)


dfs(1)

print(sum(visited))