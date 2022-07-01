t = int(input())
for _ in range(t):
    
    n = int(input())
    arr = map(int,input().split())
    
    n_after = len(set(arr))
    print(n_after) if (n-n_after) % 2 == 0 else print(n_after-1)
    