iAb = int(input())

arr = list(map(int, input().split()))

iTb = 0
iCount = 0
dSlg = 0

for i in range(iAb):
    iBa = arr[i]

    if iBa != -1:
        iTb += iBa
        iCount += 1

dSlg = iTb / iCount

print(dSlg)
