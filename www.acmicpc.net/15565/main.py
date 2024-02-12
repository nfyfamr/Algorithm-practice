input = open(0).readline

N, K = map(int, input().strip().split())
cnt = None
dist = []
for idx, val in enumerate(map(int, input().strip().split())):
    if val == 2 and len(dist) > 0:
        dist[-1] += 1
    elif val == 1:
        dist.append(1)

total = 0
cum_dist = [0] + [total := total + d for d in dist]
cum_dist.pop()
min_dist = 1_000_001

# edge case
if K == 1 and len(cum_dist) > 0:
    print(1)
    exit(0)

for i in range(len(cum_dist)-(K-1)):
    min_dist = min(min_dist, cum_dist[i + K - 1] - cum_dist[i] + 1)

if min_dist == 1_000_001:
    print(-1)
else:
    print(min_dist)
