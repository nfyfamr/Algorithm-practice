from copy import deepcopy
input = open(0).readline

N = int(input())
edge = [[] for _ in range(N)]
for i in range(N):
    for j, v in enumerate(map(int, input().strip().split())):
        if v == 1:
            edge[i].append(j)

visits = [[0]*N for _ in range(N)]
for i in range(N):
    # dfs
    stack = deepcopy(edge[i])
    while len(stack) != 0:
        v = stack.pop()
        if visits[i][v] == 0:
            visits[i][v] = 1
            stack = stack + edge[v]

for i in range(N):
    print(' '.join(map(str, visits[i])))
