input = open(0).readline
n = int(input())
mat = []
for i in range(n):
    r, c = map(int, input().split())
    mat.append([r, c])

dp = [[0]*n for _ in range(n)]
for i in range(1, n):
    for j in range(n-i):
        cost = []
        for k in range(i):
            c = dp[j+k][j] + dp[i+j][j+k+1] + mat[j][0]*mat[j+k][1]*mat[i+j][1]
            cost.append(c)
        dp[i+j][j] = min(cost)

print(dp[n-1][0])
