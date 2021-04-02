N = int(input())
lst = [input().split() for _ in range(N)]
lst.sort(key=lambda p: int(p[0]))

for l in lst:
    print(l[0], l[1])
