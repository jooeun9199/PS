q = int(input())

for _ in range(q):
    n = int(input())
    s = list(input())
    t = list(input())
    
    ans = 'YES'
    
    for i in range(1,n):
        if s[i-1] != t[i-1]:
            if s[i-1:i+1] == ['a','b']:
                s[i-1] = 'b'
                s[i] = 'a'
                
            elif s[i-1:i+1] == ['b','c']:
                s[i-1] = 'c'
                s[i] = 'b'
                
            else:
                ans = 'NO'
                break
        print(s)
        
    if s[-1] != t[-1]:
        ans = 'NO'
            
    print(ans)
        
        
    
    
