from collections import defaultdict

N= int(input())
arr = list(map(int,input().split()))

cnts = defaultdict(int)
for x in arr:
    cnts[x] += 1
    
lst = []
for length, cnt in cnts.items():
    while cnt >= 2:
        cnt-=2
        lst.append(length)


lst.sort()

sum = 0
while len(lst)>=2:
    sum += lst[-1]*lst[-2]
    
    lst.pop()
    lst.pop()
    
print(sum)
