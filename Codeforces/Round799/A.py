t = int(input())
for _ in range(t):
    a,b,c,d = map(int,input().split())
    
    cnt = 0
    for x in [b,c,d]:
        if x>a:
            cnt+=1
    print(cnt)
    