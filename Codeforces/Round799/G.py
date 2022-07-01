t = int(input())
for _ in range(t):
    n,k = map(int,input().split())
    a = list(map(int,input().split()))
    
    pre = a[0]
    cnt = 0
    ans = 0
    for cur in a[1:]:
        
        if pre < 2 * cur:
            cnt+=1
        else:
            cnt = 0
        
        if cnt>=k:
            ans+=1
            
        pre = cur
        
        
    print(ans)
    