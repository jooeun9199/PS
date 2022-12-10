import sys
import copy

deltas = [(1,0),(-1,0),(0,1),(0,-1)]

def fall(MAP):

    W = len(MAP[0])

    for j in range(W):
        hole = 0
        for i in range(H-1,-1,-1):
            if MAP[i][j] == 0:
                hole += 1
            elif hole:
                MAP[i+hole][j] = MAP[i][j]
                MAP[i][j] = 0



def shoot(j,MAP,cnt):

    H = len(MAP)
    W = len(MAP[0])

    i = 0
    while i < H and MAP[i][j] == 0:
        i += 1

    if i == len(MAP):
        return cnt

    Q = set()
    Q.add((i,j))
    while Q:
        i,j = Q.pop()
        RANGE = MAP[i][j]

        for r in range(1,RANGE):
            for dx,dy in deltas:
                x = i+r*dx
                y = j+r*dy

                if x>=0 and x<H and y>=0 and y<W and MAP[x][y]:
                    Q.add((x,y))

        MAP[i][j] = 0
        cnt -= 1

    fall(MAP)


    return cnt


def dfs(level, N, MAP, cnt, MIN):

    H = len(MAP)
    W = len(MAP[0])

    if cnt == 0:
        return MIN

    if level == N:
        if cnt < MIN:
            MIN = cnt
        return MIN

    for j in range(W):
        tmp = copy.deepcopy(MAP)
        MIN = dfs(level+1,N,MAP,shoot(j,MAP,cnt),MIN)
        MAP = tmp

    return MIN

sys.stdin = open("sample_input.txt","r")
T = int(input())
for t in range(1,T+1):
    N,W,H = map(int,input().split())

    MAP = []
    for _ in range(H):
        MAP.append(list(map(int,input().split())))

    cnt = sum(sum([1 for x in arr if x]) for arr in MAP)

    MIN = dfs(0,N,MAP,cnt,cnt)

    print('#',t,' ',MIN,sep='')