N, my_name = input().split()

N = int(N)

cnt = 0
for i in range(N):
    name = input()

    if name.find(my_name) != -1:
        cnt += 1

print(cnt)