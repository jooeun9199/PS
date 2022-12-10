N, K = map(int,input().split())
edges = [[] for _ in range(N+1)]
for _ in range(N-1):
    u,v = map(int,input().split())
    edges[u].append(v)
    edges[v].append(u)    
edges[0].append(1)

trash = [0] + list(map(int,input().split()))

class State:
    def __init__(self, visited = [0]*(N+1), trashes = set()):
        self.visited = visited
        self.trashes = trashes
        

queue = [(0,State(visited = [1]+[0]*(N),trashes=set([0])))]
MAX = 0
while queue:
    cur, state = queue.pop()
    for nxt in edges[cur]:
        if not state.visited[nxt]:
            visited = state.visited.copy()
            visited[nxt] = True
            trashes = state.trashes.copy()
            for x in state.trashes:
                if x+trash[nxt] <= K:
                    MAX = max(MAX,x+trash[nxt])
                    trashes.add(x+trash[nxt])
                trashes.add(x)
            queue.append((nxt,State(visited = visited, trashes = trashes)))
            
print(MAX)