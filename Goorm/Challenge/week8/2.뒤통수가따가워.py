N = int(input())
heights = list(map(int,input().split()))

stack = []
for x in heights:
    print(len(stack),end=' ')
    while stack and stack[-1] <= x:
        stack.pop()
    stack.append(x)