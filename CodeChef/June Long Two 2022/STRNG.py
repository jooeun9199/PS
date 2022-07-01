

t = int(input())
for _ in range(t):
    N = int(input())
    A = list(map(int,input().split()))
    
    
    
    strong = [0] * N
    MAX = max(A)
    for divisor in range(2,MAX+1):
        no = 0
        for i in range(N):
            if A[i]%divisor != 0:
                no += 1
                ind = i
            if no == 2:
                break
        if no == 0:
            strong = [1] * N
            break
        if no == 1:
            strong[ind] = 1
    print(sum(strong))
    
