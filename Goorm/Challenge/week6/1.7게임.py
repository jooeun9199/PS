for _ in range(5):
    K = input()
    
    add,mul = 0,1
    for i in range(0,len(K),2):
        add = (add + int(K[i])) % 10
    for i in range(1,len(K),2):
        if int(K[i]):
            mul = (mul*int(K[i])) % 10
    
    print(add*mul % 10)
    