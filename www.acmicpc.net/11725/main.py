from collections import deque
input = open(0).readline

N = int(input())
edge = [[] for _ in range(N+1)]
for _ in range(N-1):
    i, j = list(map(int, input().strip().split()))
    edge[i].append(j)
    edge[j].append(i)

parent = [0] * (N+1)
q = [1]
while len(q) != 0:
    new_q = []
    while len(q) != 0:
        v = q.pop()
        for w in edge[v]:
            if parent[w] == 0:
                parent[w] = v
                new_q.append(w)

    q, new_q = new_q, q

for i in range(2, N+1):
    print(parent[i])
