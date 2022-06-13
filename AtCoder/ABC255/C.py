X, A, D, N = [int(x) for x in input().split()]

start = 0
end = N
while start < end:
    ind = int((start + end) / 2)
        
    tmp = abs(A + D * ind - X)
    if ind-1 >= 0 and abs(A + D * (ind-1) - X) < tmp:
        end = ind
    elif ind+1 < N and abs(A + D * (ind+1) - X) < tmp:
        start = ind
    else:
        print(tmp)
        break