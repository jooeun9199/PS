N,M = map(int,input().split())
MAP = [list(map(int,input().split())) for _ in range(N)]
ROW = [0 for _ in range(N)]
COL = [0 for _ in range(M+1)]
P = int(input())
for _ in range(P):
    DIR,Nth = map(int,input().split())
        
    if DIR == 1:
        COL[Nth-1] ^= 1
    elif DIR == 0 and Nth <= N:
        ROW[Nth-1] ^= 1

for i in range(N):
    for j in range(M):
        print(MAP[i][j] ^ ROW[i] ^ COL[j], end = ' ')
    print()