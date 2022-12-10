N,M = map(int,input().split())
MAP = [list(map(int, input().split())) for _ in range(N)]

directions = [[1,0],[-1,0],[0,1],[0,-1]]
    


def cnt_regions(MAP):
    cnt = 0
    visited = [[0 for _ in range(M)] for _ in range(N)]
    for i in range(N):
        for j in range(M):
            if MAP[i][j] == 1 and not visited[i][j]:
                visited[i][j] = 1
                stack = [(i,j)]
                while stack:
                    x,y = stack[-1]
                    stack.pop(-1)
                    for dx,dy in directions:
                        X = x+dx
                        Y = y+dy
                        if X >= 0 and X < N and Y >= 0 and Y < M and MAP[X][Y] == 1 and not visited[X][Y]:
                            visited[X][Y] = 1
                            stack.append((X,Y))

                    
                cnt += 1
        
    return cnt
    
    
def flood(MAP,time):
    for i in range(N):
        for j in range(M):
            if MAP[i][j] == 1:
                for dx,dy in directions:
                    x = i+dx
                    y = j+dy
                    if x >= 0 and x < N and y >= 0 and y < M and MAP[x][y] == -time+1:
                        MAP[i][j] = -time
                        break
                




time = 0
cnt = 1
while cnt != 0:
    
    cnt = cnt_regions(MAP)
    
    if cnt > 1:
        print(time)
        break
    
    time += 1
    
    flood(MAP,time)

    
    
    
if cnt == 0:
    print(-1)