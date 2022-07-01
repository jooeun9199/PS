t = int(input())
for _ in range(t):
    a,b = map(int,input().split())
    
    MIN = min(a,b)
    
    if a>b:
        ans = '01'*MIN + '0'*(a-MIN)
    else:
        ans = '10'*MIN + '1'*(b-MIN)
        
    print(ans)