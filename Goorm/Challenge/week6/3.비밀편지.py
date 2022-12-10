import string

upper = string.ascii_uppercase
lower = string.ascii_lowercase


def encode(val,key):
    if val.isupper():
        return upper[(upper.index(val) + ord(key)) % 26]
    if val.islower():
        return lower[(lower.index(val) + ord(key)) % 26]
    return val
    
def decode(val,key):
    if val.isupper():
        return upper[(upper.index(val) - ord(key)) % 26]
    if val.islower():
        return lower[(lower.index(val) - ord(key)) % 26]
    return val

T = int(input())
for _ in range(T):
    S = input()
    op, token = input().split()
    
    while len(token) < len(S):
        token += token
    
    ans = ''
    if op == 'E':
        for i in range(len(S)):
            ans += encode(S[i],token[i])
        
    else:
        for i in range(len(S)):
            ans += decode(S[i],token[i])
            
    print(ans)