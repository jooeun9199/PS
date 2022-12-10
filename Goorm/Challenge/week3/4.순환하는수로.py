import sys
sys.setrecursionlimit(20000000)

N = int(input())
edges = [[] for _ in range(N+1)]
for _ in range(N):
	a,b = map(int,input().split())
	edges[a].append(b)
	edges[b].append(a)

done = [0] * (N+1)
prev = [0] * (N+1)
MAX = 0
ans = []
def dfs(i):
	global MAX,ans
	
	if not done[i]:
		done[i] = 1
	
	for edge in edges[i]:
		if not prev[edge]:
			prev[edge] = i
			dfs(edge)
			prev[edge] = 0
		elif i != prev[edge]:
			cnt = 2
			cur = prev[i]
			path = [i,cur]
			while cur != edge:
				cur = prev[cur]
				cnt += 1
				path.append(cur)
			
			if MAX < cnt:
				ans = path.copy()
				MAX = cnt
				
for i in range(1,N+1):
	if not done[i]:
		dfs(i)
			
	
print(MAX)
for x in sorted(ans):
	print(x,end=' ')
				
				
				