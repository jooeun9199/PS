def move(cur,next):
    
    diff = tuple(b-a for a,b in zip(cur,next))

    tmp = ""
    
    if diff[0]>0:
        for _ in range(diff[0]):
            tmp = tmp + "D"
    if diff[0]<0:
        for _ in range(-diff[0]):
            tmp = tmp + "U"
    if diff[1]>0:
        for _ in range(diff[1]):
            tmp = tmp + "R"
    if diff[1]<0:
        for _ in range(-diff[1]):
            tmp = tmp + "L"
    
    return tmp



N,M,S_len = map(int,input().split())

loc = {}
for i in range(N):
    for j,item in enumerate(input()):
        L = loc.get(item)
        if not L:
            L = []
        L.append((i,j))
        loc[item] = L

S = input()
cur = (0,0)
cnt = 0
ans = ""
end = False
while not end:
    
    tmp = ""
    tmp_cur = cur
    for s in S:
        if loc.get(s):
            next = loc[s].pop()
            tmp += move(tmp_cur,next)
            tmp += "P"
            tmp_cur = next
            
        else:
            end = True
            break
        
    if end:
        ans += move(cur,(N-1,M-1))
        
    else:
        cur = tmp_cur
        ans += tmp
        cnt += 1
    
print(cnt,len(ans))
print(ans)
    

