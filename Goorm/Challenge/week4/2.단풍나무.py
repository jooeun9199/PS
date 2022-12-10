N = int(input())
MAP = [list(map(int,input().split())) for _ in range(N)]

left = []
for i in range(N):
	for j in range(N):
		if MAP[i][j]:
			left.append((i,j))
			
time = 0
directions = [[1,0],[-1,0],[0,1],[0,-1]]
while left:

	nxt = []
	for x,y in left:
		cnt = 0
		for dx, dy in directions:
			x_ = x + dx
			y_ = y + dy
			if x_ >= 0 and x_ < N and y_ >= 0 and y_ < N and MAP[x_][y_] == 0:
				cnt += 1
		nxt.append((x,y,cnt))
	
	for x,y,cnt in nxt:
		if MAP[x][y] > cnt:
			MAP[x][y] -= cnt
		else:
			MAP[x][y] = 0
			left.remove((x,y))
	
	time += 1
	
print(time)
				