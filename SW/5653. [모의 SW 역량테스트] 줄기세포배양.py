import sys
sys.stdin = open("sample_input.txt","r")


directions = [(1,0),(-1,0),(0,1),(0,-1)]

class Cell:
    def __init__(self,health,state='inactive'):
        # self.x = x
        # self.y = y
        self.health = health
        self.life = health
        self.state = state  #inactive/active/dead





T = int(input())
for t in range(1,T+1):
    N,M,K = map(int,input().split())
    MAP = dict()
    for i in range(N):
        for j,v in enumerate(list(map(int, input().split()))):
            if v:
                MAP[(i,j)] = Cell(v)

    alive = [(x,y) for x,y in MAP]
    for _ in range(K):
        new = dict()
        for i,j in alive.copy():
            cell = MAP[(i,j)]
            cell.life -= 1


            if cell.life == cell.health-1 and cell.state == 'active':
                for dx,dy in directions:
                    x = i+dx
                    y = j+dy
                    if not (x,y) in MAP:
                        if (x,y) in new:
                            if new[(x,y)].health < cell.health:
                                new[(x,y)] = Cell(cell.health)
                        else:
                            new[(x,y)] = Cell(cell.health)

            if cell.life == 0:
                if cell.state == 'inactive':
                    cell.state = 'active'
                    cell.life = cell.health

                elif cell.state == 'active':
                    alive.remove((i,j))
                    cell.state = 'dead'


        for key,val in new.items():
            MAP[key] = val
            alive.append(key)

        # print(alive)


    print("#{} {}".format(t,len(alive)))