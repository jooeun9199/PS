

T = int(input())
Ns = []
Ms = []
for _ in range(T):
    N,M = map(int,input().split())
    
    
    if N>M:
        for i in range(N):
            for j in range(M):
                print(1+j*(M+1)+i*(j+1),end=" ")
            print()
                
    else:
        for i in range(N):
            for j in range(M):
                print(1+i*(N+1)+j*(i+1),end=" ")
            print()
                
    