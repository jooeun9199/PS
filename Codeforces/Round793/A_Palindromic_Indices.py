T = int(input())
for t in range(T):
    length = int(input())
    palindrome = input()
    
    cnt = 0
    index = int(length/2)
    char = palindrome[index]
    
    while index < length and char == palindrome[index]:
        cnt += 1
        index += 1

    if length%2 == 0:
        cnt *= 2
    else:
        cnt = cnt * 2 - 1
    print(cnt)
        
            