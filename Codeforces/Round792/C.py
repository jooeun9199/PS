from numpy import argsort
N = input()

for n in range(int(N)):
    rows, cols = input().split()
    rows = int(rows)
    cols = int(cols)
    
    map = []
    for row in range(rows):
        INPUT = input().split()
        map.append([int(num) for num in INPUT])
        
    for row in map:
        cnt = 0
        for i in range(1,cols):
            if map[i-1] > map[i]:
                cnt += 1
        if cnt > 2:
            print(-1)
            break
        