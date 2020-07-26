import sys

N = int(sys.stdin.readline())

for i in range(N):
    tmpSum = i
    res = ''
    for k in str(i):
        tmpSum = tmpSum + int(k)
        res = res + k
    if tmpSum == N:
        print(res)
        exit()

print(0)
