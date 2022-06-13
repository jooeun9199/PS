
Row, Col = [int(x) for x in input().split()]

A, B = [int(x) for x in input().split()]
C, D = [int(x) for x in input().split()]


if Row == 1:
    print(A) if Col == 1 else print(B)
else:
    print(C) if Col == 1 else print(D)