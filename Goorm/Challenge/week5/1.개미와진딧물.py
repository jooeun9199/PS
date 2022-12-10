N,M = map(int,input().split())
MAP = [list(map(int,input().split())) for _ in range(N)]

cnt = 0
for i in range(N):
    for j in range(N):
        if MAP[i][j] == 1:
            found = False
            for x in range(max(0,i-M),min(N,i+M+1)):
                d = M-abs(i-x)
                for y in range(max(0,j-d),min(N,j+d+1)):
                    if MAP[x][y] == 2:
                        found = True
                        break
                if found:
                    break
            if found:
                cnt += 1

print(cnt)