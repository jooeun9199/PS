t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int,input().split()))
    
    pre = a[0]
    
    cnt = dict()
    
    for cur in a[1:]:
        
        if pre == cur:
            cnt[cur] = cnt.get(cur,0) + 2
            
        for key,val in cnt.items():
            cnt[key] = val-1
        
        pre = cur
        
        
    print(ans)
    