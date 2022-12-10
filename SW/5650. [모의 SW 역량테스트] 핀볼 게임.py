import sys
sys.stdin = open("sample_input.txt","r")

# 0.DOWN,1.UP,2.RIGHT->,3.LEFT<-
directions = [(1,0),(-1,0),(0,1),(0,-1)]
deltas = [
    [],
    [2,0,3,1],
    [1,2,3,0],
    [1,3,0,2],
    [3,0,1,2],
    [1,0,3,2],
]
T = int(input())
for t in range(1,T+1):
    N = int(input())
    MAP = [[5]*(N+2)]
    wormhole = dict()
    for i in range(1,N+1):
        MAP.append([5]+list(map(int,input().split()))+[5])
        for j in range(1,N+1):
            val = MAP[i][j]
            if val >= 6:
                if wormhole.get(val,0):
                    x,y = wormhole[val]
                    wormhole[(i,j)] = (x,y)
                    wormhole[(x,y)] = (i,j)
                    wormhole.pop(val)
                else:
                    wormhole[val] = (i,j)
    MAP.append([5]*(N+2))

    MAX = 0
    for i in range(1,N+1):
        for j in range(1,N+1):
            if MAP[i][j]==0:
                for dir_ind,(dx,dy) in enumerate(directions):
                    cnt = 0
                    x = i + dx
                    y = j + dy
                    cur_dir_ind = dir_ind
                    while (x,y)!=(i,j) and MAP[x][y] != -1:

                        val = MAP[x][y]
                        if val == 0:
                            pass
                        elif val>=1 and val <= 5:
                            cur_dir_ind = deltas[val][cur_dir_ind]
                            cnt += 1
                            dx,dy = directions[cur_dir_ind]
                        elif val >= 6 and val <= 10:
                            x,y = wormhole[(x,y)]

                        x = x + dx
                        y = y + dy



                    MAX = max(cnt,MAX)
                    # print(i,j,dir_ind,cnt,MAX)


    print("#{} {}".format(t,MAX))