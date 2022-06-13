T = int(input())

for testcase in range(T):
    N, K = input().split()
    num_Traps = int(N)
    num_Jumps = int(K)
    
    Trap_Damage = [int(num) for num in input().split()]
    
    Damages = [[0] * (num_Jumps+1)]
    
    
    for i in range(1,num_Traps+1):
        Damages.append([])
        Damages[i].append(Damages[i-1][0]+Trap_Damage[i-1])
        for j in range(1, num_Jumps+1):
            Damages[i].append(min(Damages[i-1][j-1],Damages[i-1][j]+Trap_Damage[i-1]+j))
    
    print(min(Damages[-1]))
        
    