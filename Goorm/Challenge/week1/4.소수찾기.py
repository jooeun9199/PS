from math import floor, sqrt

N = int(input())

arr = list(map(int,input().split()))


prime = [0,0] + [1 for _ in range(N-1)]
for i in range(2,floor(sqrt(N))+1):
    if prime[i]:
        for n in range(i*i,N+1,i):
            prime[n]=0
            
sum = 0
for i in range(1,N+1):
    if prime[i]:
        sum += arr[i-1]
        
print(sum)
