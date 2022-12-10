from collections import deque

N,M,K = map(int,input().split())

edges = [[] for _ in range(N+1)]
for _ in range(M):
	u,v = map(int,input().split())
	edges[u].append(v)
	edges[v].append(u)


ans = 'NO'
visited = [-1,0] + [-1] * (N-1)
nodes = deque([1])
while nodes:
	node = nodes.popleft()
	if visited[node] > K:
		break
	elif node == N:
		ans = 'YES'
		break
	for edge in edges[node]:
		if visited[edge] == -1:
			visited[edge] = visited[node] + 1
			nodes.append(edge)
		
print(ans)
	

		
