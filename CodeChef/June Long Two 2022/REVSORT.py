t = int(input())
for _ in range(t):
    N,X  = map(int,input().split())
    A = list(map(int,input().split()))
    
    SUM = 0
    MAX = A[0]
    for x in A[1:]:
        if MAX <= x:
            MAX = x
        else:
            if SUM < MAX + x:
                SUM = MAX + x
                
    if SUM <= X:
        print('Yes')
    else:
        print('No')