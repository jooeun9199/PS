N, S = map(int, input().split())
lst = map(int, input().split())


sums = dict()

for x in lst:

    for sum, cnt in sums.copy().items():
        new_sum = sum+x
        sums[new_sum] = sums.get(new_sum,0) + cnt
        
        
    sums[x] = sums.get(x,0)+1
    
            
print(sums.get(S,0))