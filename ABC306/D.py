INF = int(1e10)

N = int(input())
X = []
Y = []
dp = []

for i in range(N):
    x,y = map(int, input().split())
    X.append(x)
    Y.append(y)

for i in range(N+1):
    dp.append([-INF]*2)

dp[0][0] = 0

for i in range(N):
    #解毒剤入り
    if X[i] == 0:
        #食べない,食べる(お腹を壊していない、壊している)の3通り
        dp[i+1][0] = max(dp[i][0], dp[i][0]+Y[i], dp[i][1]+Y[i])
        dp[i+1][1] = dp[i][1]
    #毒入り
    else:
        #食べる(お腹を壊していない),食べないの2通り
        dp[i+1][1] = max(dp[i][0]+Y[i], dp[i][1])
        dp[i+1][0] = dp[i][0]

print(max(dp[N][0], dp[N][1]))