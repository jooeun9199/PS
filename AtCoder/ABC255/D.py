N, Q = [int(x) for x in input().split()]

lst = [int(x) for x in input().split()]
lst.sort()

accum = [sum(lst)]
for x in lst:
    accum.append(accum[-1] - x*2)


for i in range(Q):
    x = int(input())
    
    
    start = 0
    end = N
    while start < end:
        ind = int((start + end) / 2)
            
        if ind-1>=0 and x < lst[ind-1]:
            end = ind-1
        elif x > lst[ind]:
            start = ind+1
        else:
            ind = int((start + end) / 2)
            break
    # print(accum)
    print(ind,-N+2*ind,accum[ind])
    print((-N+2*ind*x + accum[ind]))