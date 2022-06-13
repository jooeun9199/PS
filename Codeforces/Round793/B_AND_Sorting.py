T = int(input())
for t in range(T):
    length = int(input())
    permutation = [int(x) for x in input().split()]
    
    ans = -1
    for i in range(length):
        if permutation[i] != i:
            ans &= i
            
    print(ans)
    
