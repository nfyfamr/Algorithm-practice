from collections import defaultdict
input = open(0).readline

fireball = []
N, M, K = map(int, input().strip().split())
for i in range(M):
    r, c, m, s, d = map(int, input().strip().split())
    fireball.append((r, c, m, s, d))

dir = [(-1, 0), (-1, 1), (0, 1), (1, 1), (1, 0), (1, -1), (0, -1), (-1, -1)]
def update_sorted_fb(fireball):
    coords = defaultdict(list)
    for fb in fireball:
        r, c, m, s, d = fb
        dist = [c*s for c in dir[d]]
        r = coord_clip(r + dist[0], N)
        c = coord_clip(c + dist[1], N)
        coords[(r,c)].append((r, c, m, s, d))
    return coords

def coord_clip(c, N):
    return c % N

def merge_split(fireball_list):
    gross_m = gross_s = align = 0
    n = len(fireball_list)
    for fb in fireball_list:
        r, c, m, s, d = fb
        gross_m = gross_m + m
        gross_s = gross_s + s
        align = align + (1 if d%2 == 0 else -1)
    new_dir = [i*2+(abs(align) != n) for i in range(4)]
    if gross_m == 0:
        return []
    else:
        return [(r, c, int(gross_m/5), int(gross_s/n), d) for d in new_dir]

for i in range(K):
    coords = update_sorted_fb(fireball)

    fireball = []
    for c, fbs in coords.items():
        if len(fbs) == 1:
            fireball = fireball + fbs
        else:
            fireball = fireball + merge_split(fbs)

total_mass = sum([fb[2] for fb in fireball])
print(total_mass)
