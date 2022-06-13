t = int(input())

for _ in range(t):
    n,m = [int(x) for x in input().split()]
    dist = [int(x) for x in input().split()]
    print(max([sum(dist)-m,0]))
    
    
