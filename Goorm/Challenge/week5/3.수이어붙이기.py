from itertools import permutations
N = int(input())
A = list(map(int,input().split()))

A.sort()

MIN = 1e20
for lst in permutations(A):
    
    num = "" + str(lst[0])
    
    for i in range(1,len(lst)):
        if lst[i-1] % 10 == lst[i] //10:
            num += str(lst[i]%10)
        else:
            num += str(lst[i])
            
    MIN = min(MIN, int(num))
    
print(MIN)