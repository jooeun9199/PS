n,q = [int(x) for x in input().split()]
price = [int(x) for x in input().split()]
price.sort(reverse=True)

sums = [0]

for i in range(n):
    sums.append(sums[i]+price[i])


for _ in range(q):
    x,y = [int(x) for x in input().split()]
    print(sums[x] - sums[x-y])