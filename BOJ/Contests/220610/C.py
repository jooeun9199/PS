num = int(input())

for i in range(num):
    N = int(input())

    lst = [int(x) for x in input().split()]
    
    
    ans = True
    pre = -1
    for x in lst:
        x = min(x,N-x+1)
        if pre<=x:
            pre = x
        elif pre<=N-x+1:
            pre = N-x+1
        else:
            ans = False
            break
        
    print('YES') if ans else print('NO')
    
    
