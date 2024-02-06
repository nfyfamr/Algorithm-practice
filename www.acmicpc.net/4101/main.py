for line in open(0):
    a, b = map(int, line.strip().split())
    if a > b:
        print('Yes')
    else:
        print('No')
