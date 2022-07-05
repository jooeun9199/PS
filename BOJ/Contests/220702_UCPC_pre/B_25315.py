def ccw(point1,point2,point3):
    
    tmp = point1[0]*point2[1] + point2[0]*point3[1] + point3[0]*point1[1] - point1[0]*point3[1] - point2[0]*point1[1] - point3[0]*point2[1]
    
    if tmp > 0:
        return 1
    elif tmp == 0:
        return 0
    else:
        return -1
    
    
def opposite(line,point1,point2):
    
    tmp = ccw(line[0],line[1],point1) * ccw(line[0],line[1],point2)
    
    if tmp > 0:
        return False
    else:
        return True
    
    
def line_intersect(line1, line2):
    
    if opposite(line1,line2[0],line2[1]) and opposite(line2,line1[0],line1[1]):
        return True
    else:
        return False


N = int(input())

LOG = []
for i in range(N):
    a,b,c,d,e = map(int,input().split())
    LOG.append((((a,b),(c,d)),e))

LOG.sort(key=(lambda x: x[1]))

sum = 0
for i in range(N):
    
    i_line, w = LOG[i]
    
    cnt = 1
    for j in range(i+1,N):
        
        j_line, _ = LOG[j]
        
        # print(i_line,j_line)
        
        if line_intersect(i_line, j_line):
            cnt+=1
                        
    sum += cnt * w
        
        
print(sum)
