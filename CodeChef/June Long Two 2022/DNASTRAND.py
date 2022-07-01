t = int(input())
for _ in range(t):
    N = int(input())
    S = input()
    
    comple = ''
    for x in S:
        if x=='A':
            comple = comple+'T'
        elif x=='T':
            comple = comple+'A'
        elif x=='C':
            comple = comple+'G'
        elif x=='G':
            comple = comple+'C'
        
    print(comple)