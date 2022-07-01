cnt = [0]
for i in range(1,2*1000):
    cnt.append(cnt[i-1]*(i-1)+1)
    
t = int(input())


for _ in range(t):
    n = int(input())

    s = input()
    
    pre = s[0]
    c = 1
    sum = 0
    for x in s[1:]:
        
        if pre!=x:
            c+=1
        else:
            sum += cnt[c]
            c=1
            
        
    if c!=1:
        sum += cnt[c]
    
    print(sum)
    