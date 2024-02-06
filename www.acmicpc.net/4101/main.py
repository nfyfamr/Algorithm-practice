input = open(0).readline
while True:
    a, b = map(int, input().strip().split())
    if a == 0 and b == 0:
        break

    if a > b:
        print('Yes')
    else:
        print('No')
