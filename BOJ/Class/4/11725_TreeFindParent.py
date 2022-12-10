N = int(input())

EDGE = [[] for _ in range(N+1)]


for _ in range(N-1):
    
    a,b = map(int,input().split())
    
    EDGE[a].append(b)
    EDGE[b].append(a)
    

Q = [1]
PARENT = [0] * (N+1)

while Q:
    parent = Q.pop(0)
    for node in EDGE[parent]:
        
        if node!=PARENT[parent]:
            
            PARENT[node] = parent
            Q.append(node)
        
        
for x in PARENT[2:]:
    print(x)