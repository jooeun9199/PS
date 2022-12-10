n,k = map(int,input().split())

sum = 0
coords = [(-1,0),(1,0),(0,-1),(0,1),(0,0)]

for _ in range(k):
    a,b = map(int,input().split())
    for dx,dy in coords:
        x = a+dx
        y = b+dy
        if x>0 and x<=n and y>0 and y<=n:
            sum += 1

print(sum)