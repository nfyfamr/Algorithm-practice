input = open(0).readline
N, K, S = map(int, input().strip().split())

left = []
right = []
for _ in range(N):
    x, k = map(int, input().strip().split())
    if x < S:
        left.append((x, k))
    else:
        right.append((x, k))
left = sorted(left)
right = sorted(right, reverse=True)

min_dist = 0
passenger = 0
for x, k in left:
    if passenger == 0:
        min_dist += 2 * (S - x)
    passenger += k

    if passenger > K:
        min_dist += 2 * (S - x) * (passenger // K - (1 if passenger%K == 0 else 0))
        passenger = passenger % K

passenger = 0
for x, k in right:
    if passenger == 0:
        min_dist += 2 * (x - S)
    passenger += k

    if passenger > K:
        min_dist += 2 * (x - S) * (passenger // K - (1 if passenger%K == 0 else 0))
        passenger = passenger % K

print(min_dist)
