input = open(0).readline

N = int(input())
snow = sorted(list(map(int, input().strip().split())))

def find_min_diff(arr, val):
    left = 0
    right = len(arr) - 1
    min_diff = 2_000_000_000
    while left < right:
        diff = arr[left] + arr[right] - val
        min_diff = min(min_diff, abs(diff))
        if diff == 0:
            break
        elif diff < 0:
            left += 1
        else:
            right -= 1
    return min_diff

glob_min_diff = 2_000_000_000
for anna_left in range(N - 3):
    for anna_right in range(anna_left+3, N):
        anna_snowman = snow[anna_left] + snow[anna_right]
        glob_min_diff = min(glob_min_diff, find_min_diff(snow[anna_left+1:anna_right], anna_snowman))
        if glob_min_diff == 0:
            print(0)
            exit(0)

print(glob_min_diff)
