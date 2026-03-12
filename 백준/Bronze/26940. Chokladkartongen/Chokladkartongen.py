t = int(input())
arr = list(map(int, input().split()))

count = 0

for i in range(1, t):
    if arr[i - 1] < arr[i]:
        count += 1

print(count)