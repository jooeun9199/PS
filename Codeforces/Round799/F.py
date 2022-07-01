t = int(input())
for _ in range(t):
    n = int(input())
    a = [int(x)%10 for x in input().split()]
    
    cnt = [0] * 10
    for x in a:
        cnt[x]+=1
        
    if (
        (cnt[0]>=2 and cnt[3]>=1) or
        (cnt[0]>=1 and cnt[1]>=1 and cnt[2]>=1) or
        (cnt[1]>=3) or
        (cnt[0]>=1 and cnt[4]>=1 and cnt[9]>=1) or
        (cnt[0]>=1 and cnt[5]>=1 and cnt[8]>=1) or
        (cnt[0]>=1 and cnt[6]>=1 and cnt[7]>=1) or
        (cnt[1]>=1 and cnt[3]>=1 and cnt[9]>=1) or
        (cnt[1]>=1 and cnt[4]>=1 and cnt[8]>=1) or
        (cnt[1]>=1 and cnt[5]>=1 and cnt[7]>=1) or
        (cnt[1]>=1 and cnt[6]>=2) or
        (cnt[2]>=2 and cnt[9]>=1) or
        (cnt[2]>=1 and cnt[3]>=1 and cnt[8]>=1) or
        (cnt[2]>=1 and cnt[4]>=1 and cnt[7]>=1) or
        (cnt[2]>=1 and cnt[5]>=1 and cnt[6]>=1) or
        (cnt[3]>=2 and cnt[7]>=1) or
        (cnt[3]>=1 and cnt[4]>=1 and cnt[6]>=1) or
        (cnt[3]>=1 and cnt[5]>=2) or
        (cnt[4]>=2 and cnt[5]>=1) or
        (cnt[5]>=1 and cnt[9]>=2) or
        (cnt[6]>=1 and cnt[8]>=1 and cnt[9]>=1) or
        (cnt[7]>=2 and cnt[9]>=1) or
        (cnt[7]>=1 and cnt[8]>=2)
        ):
        print('YES')
        
    else:
        print('NO')