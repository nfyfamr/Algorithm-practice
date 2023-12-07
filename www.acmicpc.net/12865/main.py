input = open(0).readline
n, k = list(map(int, input().split()))
wv = []
for i in range(n):
    wv.append(list(map(int, input().split())))

dp_curr = [0] * (k+1)
dp_prev = [0] * (k+1)
for w, v in wv:
    for i in range(k+1):
        if w <= i:
            dp_curr[i] = max(v+dp_prev[i-w], dp_prev[i])
        else:
            dp_curr[i] = dp_prev[i]
    dp_prev, dp_curr = dp_curr, dp_prev

print(dp_prev[-1])
