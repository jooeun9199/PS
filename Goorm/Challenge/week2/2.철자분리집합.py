N = int(input())
s = input()

cnt = 1
prev = s[0]
for x in s[1:]:
    if x != prev:
        cnt += 1
        prev = x
print(cnt)