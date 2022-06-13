from re import L


T = int(input())

for t in range(T):
    
    A_len = int(input())
    A = [int(x) for x in input().split()]
    B_len = int(input())
    B = [int(x) for x in input().split()]
    A.sort()
    B.sort()
    
    A_copy = A.copy()
    B_copy = B.copy()
    
    A_ind = 0
    B_ind = 0
    cur = A_copy.pop(0)
    end = False
    
        
    while True:
        
        while True:
            if B_ind >= len(B_copy):
                print("Alice")
                end = True
                break
            
            if B_copy[B_ind] <= cur:
                B_ind += 1
            else:
                break
            
        if end:
            break
        
        cur = B_copy.pop(B_ind)
        
        while True:
            if A_ind >= len(A_copy):
                print("Bob")
                end = True
                break
            
            if A_copy[A_ind] <= cur:                
                A_ind += 1
            else:
                break
            
            
        if end:
            break
        
        cur = A_copy.pop(A_ind)
        
        
        
            
        
        
      
    A_copy = A.copy()
    B_copy = B.copy()
    
    A_ind = 0
    B_ind = 0
    cur = B_copy.pop(0)
    end = False  
    
    
    while True:
        
        
        while True:
            if A_ind >= len(A_copy):
                print("Bob")
                end = True
                break
            
            if A_copy[A_ind] <= cur:                
                A_ind += 1
            else:
                break
            
            
        if end:
            break
        
        cur = A_copy.pop(A_ind)
        
        while True:
            if B_ind >= len(B_copy):
                print("Alice")
                end = True
                break
            
            if B_copy[B_ind] <= cur:
                B_ind += 1
            else:
                break
            
        if end:
            break
        
        cur = B_copy.pop(B_ind)
        
        
        
        
        
        
        
