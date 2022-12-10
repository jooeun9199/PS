import sys
sys.stdin = open("sample_input.txt","r")

class Magnet:
    def __init__(self,wings,ind=0):
        self.wings = wings
        self.ind = ind

    def get(self, n):
        return self.wings[(self.ind+n)%8]

    # 회전방향은 1 일 경우 시계방향이며, -1 일 경우 반시계방향이다.
    def rotate(self, direction):
        if direction == 1:
            self.ind = (self.ind-1)%8
        else:
            self.ind = (self.ind+1)%8

T = int(input())
for testcase in range(1,T+1):
    rotates = int(input())
    magnets = [[]]
    for _ in range(4):
        # N 극이 0 으로, S 극이 1
        # 각 자석의 날 자성정보는 빨간색 화살표 위치의 날부터 시계방향 순서대로 주어진다.
        magnets.append(Magnet(list(map(int,input().split()))))

    for _ in range(rotates):
        # 회전방향은 1 일 경우 시계방향이며, -1 일 경우 반시계방향이다.
        magnet, direction = map(int,input().split())
        torotate = [(magnet,direction)]

        cur_dir = direction
        for i in range(magnet+1,5):
            if magnets[i-1].get(2) != magnets[i].get(-2):
                cur_dir = -cur_dir
                torotate.append((i,cur_dir))
            else:
                break

        cur_dir = direction
        for i in range(magnet-1,0,-1):
            if magnets[i].get(2) != magnets[i+1].get(-2):
                cur_dir = -cur_dir
                torotate.append((i,cur_dir))
            else:
                break

        for magnet, direction in torotate:
            magnets[magnet].rotate(direction)


    ans = 0
    for i, magnet in enumerate(magnets[1:]):
        ans += magnet.get(0) * 2**i


    print("#{} {}".format(testcase,ans))