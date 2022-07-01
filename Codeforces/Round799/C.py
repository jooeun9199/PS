t = int(input())
for _ in range(t):
    input()
    
    map = []
    for _ in range(8):
        map.append(input())
    
    cnt = []
    for x in map:
        cnt.append(x.count('#'))
    
    for i in range(1,7):
        if cnt[i-1] == 2 and cnt[i] == 1 and cnt[i+1] == 2:
            print(i+1,map[i].index('#')+1)
            break
        
