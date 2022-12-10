N,K = map(int,input().split())

MAP = [[0] * 1002 for _ in range(1002)]

for _ in range(N):
    x1,y1,x2,y2 = map(int,input().split())
    MAP[x1+1][y1+1] += 1
    MAP[x1+1][y2+1] -= 1
    MAP[x2+1][y1+1] -= 1
    MAP[x2+1][y2+1] += 1
            
cnt = 0
for i in range(1,1002):
    for j in range(1,1002):
        
        MAP[i][j] += MAP[i-1][j] + MAP[i][j-1] - MAP[i-1][j-1]
        
        if MAP[i][j] == K:
            cnt += 1
            
print(cnt)