X = int(input())
N = int(input())
sum = 0
for _ in range(N):
    price, count = map(int,input().split())
    sum += price * count
    
if X == sum:
    print('Yes')
else:
    print('No')