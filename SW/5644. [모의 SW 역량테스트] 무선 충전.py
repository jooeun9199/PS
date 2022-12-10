import sys
sys.stdin = open('sample_input.txt', 'r')

class Battery:
    def __init__(self, x, y, coverage, performance):
        self.x = x
        self.y = y
        self.coverage = coverage
        self.performance = performance

def assign(MAP,x,y,val):
    first, second = MAP[x][y]
    if not first:
        first = val
    else:
        if first < val:
            second = first
            first = val
        elif second < val:
            second = val
        else:
            pass
    MAP[x][y] = (first,second)

# 0:이동하지 않음 1:상 2:우 3:하 4:좌
directions = [(0, 0), (0, -1), (1, 0), (0, 1), (-1, 0)]
T = int(input())
for t in range(1, T+1):
    time, cnt = map(int, input().split())
    dA = list(map(int, input().split()))
    dB = list(map(int, input().split()))
    batteries = []
    for _ in range(cnt):
        x, y, coverage, performance = map(int, input().split())
        batteries.append(Battery(x,y,coverage,performance))

    ans = 0
    A = (1,1)
    B = (10,10)
    for i in range(time+1):
        A_batteries = [(0,-1)]
        B_batteries = [(0,-2)]
        for ind,battery in enumerate(batteries):
            if abs(battery.x - A[0]) + abs(battery.y - A[1]) <= battery.coverage:
                A_batteries.append((battery.performance,ind))
            if abs(battery.x - B[0]) + abs(battery.y - B[1]) <= battery.coverage:
                B_batteries.append((battery.performance,ind))
        A_batteries.sort(reverse=True)
        B_batteries.sort(reverse=True)

        if A_batteries[0][1] == B_batteries[0][1]:
            ans += A_batteries[0][0] + max(A_batteries[1][0],B_batteries[1][0])
        else:
            ans += A_batteries[0][0] + B_batteries[0][0]

        if i == time:
            break

        A = (A[0]+directions[dA[i]][0],A[1]+directions[dA[i]][1])
        B = (B[0]+directions[dB[i]][0],B[1]+directions[dB[i]][1])


    print("#{} {}".format(t, ans))
