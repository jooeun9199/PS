N = int(input())
text = input()

str2num = {
    'qw':'1',
    'as':'2',
    'zx':'3',
    'we':'4',
    'sd':'5',
    'xc':'6',
    'er':'7',
    'df':'8',
    'cv':'9',
    'ze':'0',
}

ans = ''
for i in range(1,N):
    key = text[i-1:i+1]
    if key in str2num:
        ans+=str2num[key]
        
print(ans)