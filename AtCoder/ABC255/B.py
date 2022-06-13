
from math import dist


people_num, light_num = [int(x) for x in input().split()]

light_index = [int(x)-1 for x in input().split()]
coord = []
for i in range(people_num):
    x,y = [int(x) for x in input().split()]
    coord.append((x,y))


MAX = 0
for i in range(people_num):
    if i not in light_index:
        MIN = 4*pow(10,5)
        for light_ind in light_index:
            tmp = dist(coord[light_ind],coord[i])
            if MIN > tmp:
                MIN = tmp
        
        if MAX < MIN:
            MAX = MIN
            
print(MAX)