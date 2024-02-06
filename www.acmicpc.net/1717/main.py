input = open(0).readline

n, m = map(int, input().strip().split())

def _find(n, set):
    if set[n] == n:
        return n
    else:
        set[n] = _find(set[n], set)
        return set[n]

def _union(u, v, set):
    set[v] = u

set = list(range(n+1))
for _ in range(m):
    command, a, b = map(int, input().strip().split())
    if command == 0:
        fa, fb = _find(a, set), _find(b, set)
        _union(fa, fb, set)
    else:
        print('YES' if _find(a, set) == _find(b, set) else 'NO')
