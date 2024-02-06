for line in open(0):
    N, S = map(int, line.strip().split())
    print(S // (N+1))
