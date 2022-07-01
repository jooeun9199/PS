t = int(input())
for _ in range(t):
    n, s = map(int,input().split())
    arr = list(map(int,input().split()))
        
    cur = sum(arr)
    if cur < s:
        print(-1)
    elif cur == s:
        print(0)
    else:
            
        i = 0
        j = -1
        L = 1
        R = 1         
        cnt = 0   
        
        while cur > s:
            
            
            while arr[i] == 0:
                i+=1
                L+=1
                
            while arr[j] == 0:
                j-=1
                R+=1
            
            
            if L<=R:
                cnt+=L
                L = 1
                i += 1
                
            
            else:
                cnt+=R
                R = 1
                j -= 1
            
            cur-=1
                    
        print(cnt)