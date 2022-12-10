n,m = map(int,input().split())

if m > n-m:
    m = n-m
    
ans = 1
for x in range(n,n-m,-1):
    ans = ans * x
    
for x in range(1,m+1):
    ans = ans // x
    
print(ans)