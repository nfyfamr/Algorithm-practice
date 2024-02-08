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
min_dist += 0 if len(left) == 0 else 2*left[0][0]
min_dist += 0 if len(right) == 0 else 2*right[0][0]
passenger = 0
for x, k in left:
    passenger += k
    if passenger > K:
        min_dist += 2 * (S - x) * (passenger // K)
        passenger = passenger % K

passenger = 0
for x, k in right:
    passenger += k
    if passenger > K:
        min_dist += 2 * (x - S) * (passenger // K)
        passenger = passenger % K

print(min_dist)
