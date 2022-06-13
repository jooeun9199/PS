
T = int(input())

for t in range(T):
    
    length = int(input())
    A = [int(x) for x in input().split()]
    B = [int(x) for x in input().split()]
    
    swaps = []
    cnt = 0
    wrong = False
    for i in range(1, length):
        
        
        for j in range(i):
            
            if A[i-j-1] > A[i-j] or (A[i-j-1] == A[i-j] and B[i-j-1] > B[i-j]):
                tmp = A[i-j]
                A[i-j] = A[i-j-1]
                A[i-j-1] = tmp
                tmp = B[i-j]
                B[i-j] = B[i-j-1]
                B[i-j-1] = tmp
                cnt += 1
                swaps.append((i-j-1,i-j))
               
        
        if B[i-j-1] > B[i-j]:
            wrong = True
            break
    
    if wrong:
        print(-1)
    else:
        print(cnt)
        for a,b in swaps:
            print(a+1,b+1)