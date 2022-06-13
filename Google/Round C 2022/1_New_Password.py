T = int(input())



for t in range(T):
    check = [False] * 5
    
    length = int(input())
    pw = input()
    
    
    for char in pw:
        if check[1] == False and char.isupper():
            check[1] = True
        elif check[2] == False and char.islower():
            check[2] = True
        elif check[3] == False and char.isdigit():
            check[3] = True
        elif check[4] == False and char in ['#', '@', '*', '&']:
            check[4] = True
    
    
    if check[1] == False:
        pw += 'A'
    if check[2] == False:
        pw += 'a'
    if check[3] == False:
        pw += '1'
    if check[4] == False:
        pw += '#'
    if len(pw) < 7:
        pw += '#' * (7-len(pw))
    
    print("Case #{}: {}".format(t+1,pw))