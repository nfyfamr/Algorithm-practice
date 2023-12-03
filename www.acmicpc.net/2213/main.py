from collections import defaultdict
n = int(input())
edges = defaultdict(list)
weights = [0] + list(map(int, input().split()))
for i in range(n-1):
    s, d = list(map(int, input().split()))
    edges[s].append(d)
    edges[d].append(s)

mem = [None] * 10001
def value(node, parent):
    if parent != -1 and len(edges[node]) == 1:
        return (weights[node],0), ([node], [])
    if mem[node] is not None:
        return mem[node]

    x0 = weights[node]; x1 = 0
    els0 = [node]; els1 = []
    for c in edges[node]:
        if c == parent:
            continue
        ws, els = value(c, node)
        x0 += ws[1]; els0 += els[1]

        if ws[0] > ws[1]:
            x1 += ws[0]; els1 += els[0]
        else:
            x1 += ws[1]; els1 += els[1]

    mem[node] = ((x0, x1), (els0, els1))
    return mem[node]

ws, els = value(1, -1)
ws, els = (ws[0], els[0]) if ws[0] > ws[1] else (ws[1], els[1])
print(ws)
print(*sorted(els))
