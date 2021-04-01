L, P = map(int, input().split())
C = L * P
for i in map(int, (input().split())):
    print(i - C, end=' ')
