N = input()



for i in range(int (N)):
    INPUT = input()
    LEN = len(INPUT)
    if LEN == 1:
        print(INPUT)
    elif LEN == 2:
        print(INPUT[-1])
    else:
        print(min(INPUT))