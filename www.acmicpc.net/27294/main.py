input = open(0).readline

T, S = list(map(int, input().strip().split()))
if 11 < T <= 16 and S == 0:
    print(320)
else:
    print(280)
