import sys
sys.stdin = open("sample_input.txt","r")

class Node:
    def __init__(self,x,y,val=0):
        self.x = x
        self.y = y
        self.val = val

T = int(input())
for testcase in range(1,T+1):

    N = int(input())
    MAP = []
    people = []
    stairs = []
    for i in range(N):
        arr = (list(map(int,input().split())))
        for j,x in enumerate(arr):
            if x == 1:
                people.append(Node(i,j))
            elif x > 1:
                stairs.append(Node(i,j,x))
        MAP.append(arr)

    for person in people:
        arrive = []
        for stair in stairs:
            dist = abs(person.x - stair.x) + abs(person.y - stair.y)
            arrive.append(dist)
        person.val = arrive

    MIN = None
    def dfs(cur,level):
        global MIN
        if level == len(people):
            results = []

            arrives = [[],[]]
            for i,stair in enumerate(cur):
                arrives[stair].append(people[i].val[stair])


            for arrive, stair in zip(arrives,stairs):
                arrive.sort()

                queue = []
                delay = 0
                time = 0
                while arrive:
                    while queue and queue[0]+stair.val == time:
                        queue.pop(0)
                    while arrive and arrive[0] <= time and len(queue) < 3:
                        queue.append(time)
                        arrive.pop(0)
                    time += 1
                results.append(time+stair.val)

            result = max(results)

            if not MIN:
                MIN = result
            elif MIN > result:
                MIN = result
            return

        dfs(cur,level+1)
        cur[level] = 1
        dfs(cur,level+1)
        cur[level] = 0

        return

    dfs([0]*len(people),0)





    print("#{} {}".format(testcase,MIN))