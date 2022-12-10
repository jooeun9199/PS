V = int(input())

EDGE = [{} for _ in range(V+1)]
H = [0] * (V+1)
Q = []

for _ in range(V):
    
    i, *l, _ = map(int,input().split())

    if len(l) == 2:
        Q.append(i)
            
    while l:
        j = l.pop(0)
        w = l.pop(0)
        EDGE[i][j] = w

# print(EDGE)
# print(H)
# print(Q)


MAX = 0
while Q:
    child = Q.pop(0)
    
    # print(child)
    
    if EDGE[child]:
        node, w  = EDGE[child].popitem()
                    
        # print(node,w)
                
        EDGE[node].pop(child)
                
                
        if len(EDGE[node]) == 1:
            Q.append(node)

        if MAX < w + H[node] + H[child]:
            MAX = w + H[node] + H[child]
        if H[node] < H[child] + w:
            H[node] = H[child] + w
        # print(H)
        # print(MAX)
        print(Q)
    # print()

# print(H)
            
print(MAX)
            
        

