from math import gcd, sqrt


N = int(input())
A = list(map(int,input().split()))
B = A.copy()
B.sort()

ans = 'YES'
for a,b in zip(A,B):
    if a!=b:
        GCD = gcd(a,b)
        a/=GCD
        b/=GCD
        
        if sqrt(a).is_integer() == False or sqrt(b).is_integer() == False:
            ans = 'NO'
            break
    
print(ans)
    
    