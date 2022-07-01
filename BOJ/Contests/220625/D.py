

directions = [(0,1),(0,-1),(1,0),(-1,0)]

N,M,K = map(int,input().split())




MAP = []
mannequin = []


for _ in range(N):
    IN = list(map(int,input().split()))
    MAP.append(IN)
    
    for j, val in enumerate(IN):
        if 4 == val:
            start_x = _
            start_y = j
        elif 3 == val:
            mannequin_X = _
            mannequin_Y = j
            mannequin.append((mannequin_X,mannequin_Y))


def check(x,y):

    if x >= 0 and x < N and  y>= 0 and y < M :
        
        ret = True
        
        for man_x, man_y in mannequin:
            
            if abs(man_x-x) + abs(man_y-y) <= K:
                
                ret = False
        
    else:
        ret = False
        
    return ret
    

def main():
    
    
    queue = []
    queue.append((start_x,start_y,0))
    while queue:
        cur_x, cur_y, cnt = queue.pop(0)
        for a,b in directions:
            next_x, next_y = cur_x+a, cur_y+b
            
            if check(next_x, next_y):
                if MAP[next_x][next_y]==2:
                    print(cnt+1)
                    return
                    
                elif MAP[next_x][next_y]==0:
                    queue.append((next_x,next_y,cnt+1))
                    MAP[next_x][next_y] = 1
                    
    print(-1)
    return
        


main()