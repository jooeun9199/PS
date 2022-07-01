t = int(input())
for _ in range(t):
    start, interval = input().split()
    H,M = start.split(':')
    H,M,interval = map(int,[H,M,interval])
    
    h = H
    m = M
    cnt = 0
    while True:
        m += interval
        while m >= 60:
            h+=1
            m-=60
        while h >= 24:
            h-=24
            
        if h%10 == m//10 and h//10 == m%10:
            cnt+=1
            
        if h==H and m==M:
            break
    print(cnt)