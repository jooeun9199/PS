N = int(input())

dp = [[1,1,1,1,1]]

transitions = [
    [0,1,2,3,4],
    [0,2,3],
    [0,1,3,4],
    [0,1,2],
    [0,2]
]

for _ in range(N-1):
    
    dp.append([sum([dp[-1][i] for i in transition])%100000007 for transition in transitions])
    
print(sum(dp[-1])%100000007)