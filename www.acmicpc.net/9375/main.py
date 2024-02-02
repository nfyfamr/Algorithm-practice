input = open(0).readline

T = int(input())
for _ in range(T):
    n = int(input())
    cloth = {}
    for _ in range(n):
        name, type = input().strip().split()
        cloth[type] = cloth.get(type, 1) + 1
    dp = list(cloth.values())
    for i in range(1, len(dp)):
        dp[i] = dp[i] * dp[i-1]
    print(dp[-1] - 1)
