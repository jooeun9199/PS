N,M,K = map(int,input().split())

dp = [[0] * (N+M+1) for _ in range(K+1)]

dp[0][N] = 1

for time in range(1,K+1):
    for i in range(N+M+1):
        dp[time][i] = sum(dp[time-1][max(i-1,1):min(i+2,N+M)]) % 100000007
  
print(sum([dp[time][0]+dp[time][-1] for time in range(1,K+1)])%100000007)