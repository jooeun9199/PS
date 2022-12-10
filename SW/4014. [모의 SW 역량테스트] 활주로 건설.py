import sys
sys.stdin = open("sample_input.txt",'r')

T = int(input())
for testcase in range(1,T+1):
    N,X = map(int,input().split())
    MAP = []
    for _ in range(N):
        MAP.append(list(map(int,input().split())))

    ans = 0
    for i in range(N):

        wrong = False
        cnt = 1
        cnt_need = False
        for j in range(1,N):

            if abs(MAP[i][j - 1] - MAP[i][j]) > 1:
                wrong = True
                break

            if MAP[i][j-1] < MAP[i][j]:
                if cnt_need:
                    if cnt < 2*X:
                        wrong = True
                        break
                    cnt_need = False
                elif cnt < X:
                    wrong = True
                    break
                cnt = 1
            elif MAP[i][j-1] > MAP[i][j]:
                if cnt_need:
                    if cnt < X:
                        wrong = True
                        break
                    cnt_need = False
                cnt_need = True
                cnt = 1
            else:
                cnt += 1


        if cnt_need:
            if cnt < X:
                wrong = True

        if not wrong:
            ans+=1


        wrong = False
        cnt = 1
        cnt_need = False
        for j in range(1,N):

            if abs(MAP[j-1][i] - MAP[j][i]) > 1:
                wrong = True
                break

            if MAP[j-1][i] < MAP[j][i]:
                if cnt_need:
                    if cnt < 2*X:
                        wrong = True
                        break
                    cnt_need = False
                elif cnt < X:
                    wrong = True
                    break
                cnt = 1
            elif MAP[j-1][i] > MAP[j][i]:
                if cnt_need:
                    if cnt < X:
                        wrong = True
                        break
                    cnt_need = False
                cnt_need = True
                cnt = 1
            else:
                cnt += 1

        if cnt_need:
            if cnt < X:
                wrong = True

        if not wrong:
            ans+=1


    print("#{} {}".format(testcase,ans))
