t = int(input())
for _ in range(t):
    N = int(input())
    A = list(map(int,input().split()))
    
    A.sort()
    MAX = 0
    cnt = 1
    pre = A[0]
    for x in A[1:]:
        if x == pre:
            cnt += 1
        else:
            if cnt > MAX:
                MAX = cnt
            cnt = 1
        pre = x
    
    if cnt > MAX:
        MAX = cnt
        
    print(N-MAX)
    
        