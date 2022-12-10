import string
N = int(input())
S = input()

ans = ""

ascii = string.ascii_lowercase
for i in range(0,N,2):
    ans += ascii[(ascii.index(S[i]) + int(S[i+1]) ** 2) % len(ascii)]
    
print(ans)