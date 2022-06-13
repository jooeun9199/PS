length, swap_cnt = [int(x) for x in input().split()]

perm = [int(x) for x in input().split()]

swaps = []
for i in range(swap_cnt):
    swaps.append(tuple(int(x) for x in input().split()))

def search(level, ind, status):
    if level == length:
        if status == [i for i in range(length)]:
            flag = True
            return ind
    else:
        for i in range(length):
            if ind[i] == -1:
                
                status =  swap by swaps[i]
                ind[i] = level
                ans = search(level + 1, swaps, ind, status)
                
                status = 
                ind[i] = -1
                
                return ans
                
        

flag = False
print(search(0,[-1] * length, perm))
