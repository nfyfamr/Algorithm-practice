input = open(0).readline

N = int(input())
grid = []

init_total = 0
for i in range(N):
    grid.append(list(map(int, input().strip().split())))
    init_total = init_total + sum(grid[-1])

step = {
    'left': (0, -1),
    'right': (0, 1),
    'up': (-1, 0),
    'down': (1, 0),
}

def scatter(sand, dir):
    scatt = [[0]*5 for _ in range(5)]
    _05, _10, _02, _07, _01 = [int(p*sand) for p in [0.05, 0.10, 0.02, 0.07, 0.01]]
    alpha = sand - (_05 + 2*_10 + 2*_07 + 2*_02 + 2*_01)

    dx, dy = step[dir]
    scatt[2 + dx*2][2 + dy*2] = _05 # 5%
    scatt[2 + dx][2 + dy] = alpha # alpha
    scatt[2 + dx + dy][2 + dy + dx] = _10 # 10%
    scatt[2 + dx - dy][2 + dy - dx] = _10 # 10%
    scatt[2 + dy][2 + dx] = _07 # 7%
    scatt[2 - dy][2 - dx] = _07 # 7%
    scatt[2 + dy*2][2 + dx*2] = _02 # 2%
    scatt[2 - dy*2][2 - dx*2] = _02 # 2%
    scatt[2 - dx + dy][2 - dy + dx] = _01 # 1%
    scatt[2 - dx - dy][2 - dy - dx] = _01 # 1%

    return scatt


def push(grid, x, y, dir):
    sand, grid[x][y] = grid[x][y], 0
    scatt = scatter(sand, dir)
    for i in range(-2, 3):
        for j in range(-2, 3):
            new_x = x + i
            new_y = y + j
            if 0 <= new_x < N and 0 <= new_y < N:
                grid[new_x][new_y] = grid[new_x][new_y] + scatt[i+2][j+2]

    return grid

next_dir = {
    'left': 'down',
    'down': 'right',
    'right': 'up',
    'up': 'left',
}
dir = 'left'
count = 1
q = ['left']
x, y = map(int, [N/2, N/2])
for i in range(1, N**2):
    dir = q.pop()
    x, y = x + step[dir][0], y + step[dir][1]
    grid = push(grid, x, y, dir)
    if len(q) == 0:
        new_dir = next_dir[dir]
        if new_dir in ['right', 'left']:
            count = count + 1
        q = [new_dir] * count

new_total = sum([sum(row) for row in grid])
print(init_total - new_total)
