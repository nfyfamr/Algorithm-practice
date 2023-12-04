input = open(0).readline

n = int(input())
attempt = dict()
numer = 0
denom = 0
for i in range(n):
    _, name, rst, _, _, _, _ = input().split()
    if name == "megalusion" or attempt.get(name, 0) < 0:
        pass
    else:
        attempt[name] = attempt.get(name, 0) + 1
        if rst == "4":
            denom += attempt[name]
            numer += 1
            attempt[name] = -1

if numer == 0:
    print(0)
else:
    print("{:.10f}".format(numer/denom*100))
