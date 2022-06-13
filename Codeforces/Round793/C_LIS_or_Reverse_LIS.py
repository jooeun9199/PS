
T = int(input())
for t in range(T):
    length = int(input())
    arr = [int(x) for x in input().split()]
    
    arr.sort()
    i = 0
    ans = length
    while i < length:
        nxt = i
        cnt = 0
        while nxt < length and arr[nxt] == arr[i]:
            cnt += 1
            nxt += 1
        if cnt >= 3:
            ans -= cnt-2
        i = nxt
                
    print(int((ans+1)/2))
