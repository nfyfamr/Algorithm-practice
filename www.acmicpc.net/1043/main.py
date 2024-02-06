input = open(0).readline

N, M = map(int, input().strip().split())
parent = list(range(N+1))
T = list(map(int, input().strip().split()))[1:]
for t in T:
    parent[t] = 0

def _find(n, parent):
    if n == parent[n]:
        return n
    else:
        parent[n] = _find(parent[n], parent)
        return parent[n]

def _union(u, v, parent):
    if parent[u] == 0:
        parent[v] = 0
    elif parent[v] == 0:
        parent[u] = 0
    else:
        parent[v] = u

parties = []
for _ in range(M):
    party = list(map(int, input().strip().split()))[1:]
    parties.append(party)
    u = party[0]
    fu = _find(u, parent)
    for v in party[1:]:
        fv = _find(v, parent)
        _union(fu, fv, parent)

p = 0
for party in parties:
    for n in party:
        if _find(n, parent) == 0:
            p = p + 1
            break

print(len(parties) - p)
