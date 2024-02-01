from collections import deque
from itertools import combinations
from copy import deepcopy

input = open(0).readline
N, M = list(map(int, input().split()))

lab = [[0]*N for _ in range(N)]
virus_cand = []
for i in range(N):
    for j, cell in enumerate(map(int, input().strip().split())):
        lab[i][j] = cell
        if cell == 2:
            virus_cand.append((i,j))


def contamination_time(lab, init):
    q = deque(init)
    next_q = deque()

    # bfs
    count = 0
    N = len(lab)
    visit = [[0]*N for _ in range(N)]
    offset = [[0, 1], [0, -1], [1, 0], [-1, 0]]
    for i, j in init:
        visit[i][j] = 1
        lab[i][j] = 0
    for i in range(N):
        for j in range(N):
            if lab[i][j] == 1:
                visit[i][j] = 1

    while len(q) > 0:
        count = count + 1
        while len(q) > 0:
            i, j = q.pop()

            for x, y in offset:
                new_i = i + x
                new_j = j + y
                if 0 <= new_i < N and 0 <= new_j < N and visit[new_i][new_j] == 0:
                    visit[new_i][new_j] = 1
                    next_q.append((new_i,new_j))
                    if lab[new_i][new_j] != 1:
                        lab[new_i][new_j] = count

        q = next_q
        next_q = deque()
        
    if sum(map(sum, visit)) != N**2:
        return -1
    else:
        return count - 1

min_cnt = 50**2
for init in combinations(virus_cand, M):
    cnt = contamination_time(deepcopy(lab), list(init))
    if cnt != -1:
        min_cnt = min(min_cnt, cnt)

if min_cnt == 50**2:
    print(-1)
else:
    print(min_cnt)
