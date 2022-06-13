import numpy as np


ROW, COL = [int(x) for x in input().split()]

map = []
for row in range(ROW):
    map.append(list(input()))
    
map = np.array(map)

D = np.where(map=='D')
R = np.where(map=='R')


moves = [(1,0),(-1,0),(0,1),(0,-1)]
MIN = 3000

# (prev, cur, move count)
stack = [(None,D,0)]
while stack:
    
    prev, cur, cnt = stack.pop()
    print(cur, cnt)
    
    if cur == R:
        print('Found!')
        MIN = min(MIN,cnt)
        continue
    
    for move in moves:
        nxt = tuple(sum(x) for x in zip(cur,move))
        if nxt!=prev and map[nxt]!='#':
            stack.append((cur,nxt,cnt+1))
    
if MIN == 3000:
    print(-1)
else:
    print(MIN)
