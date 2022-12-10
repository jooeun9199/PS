import sys
sys.stdin = open('sample_input.txt','r')

class Atom:
    def __init__(self,x,y,direction,energy):
        self.x = x
        self.y = y
        self.direction = direction
        self.energy = energy

# 상(0), 하(1), 좌(2), 우(3)
directions = [(0,1),(0,-1),(-1,0),(1,0)]
T = int(input())
for t in range(1,T+1):
    N = int(input())
    explodes = 0
    atoms = []
    for _ in range(N):
        x,y,direction,energy = map(int,input().split())
        atoms.append(Atom(2*x,2*y,direction,energy))

    for _ in range(4000):
        next = {}
        for atom in atoms:
            dx, dy = directions[atom.direction]
            atom.x += dx
            atom.y += dy
            next[(atom.x,atom.y)] = next.get((atom.x,atom.y),[]) + [atom]

        atoms = []
        for key,val in next.items():
            if len(val) > 1:
                for atom in val:
                    explodes += atom.energy
            else:
                atoms += val


    print('#{} {}'.format(t,explodes))