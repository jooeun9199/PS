T = int(input())
for _ in range(T):
    N,K = map(int,input().split())
    MAP = [list(map(int,input().split())) for _ in range(N)]
    
    integral = [[0 for _ in range(N+1)] for _ in range(N+1)]
    
    
    
    for i in range(1,N+1):
        for j in range(1,N+1):
            integral[i][j] = MAP[i-1][j-1] + integral[i-1][j] + integral[i][j-1] - integral[i-1][j-1]
            
    
    MIN = K**2
    for i in range(K,N+1):
        for j in range(K,N+1):
            MIN = min(MIN, integral[i-K][j-K] - integral[i-K][j] - integral[i][j-K] + integral[i][j])
            
    print(MIN)