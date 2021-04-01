T = int(input())
for _ in range(T):
    n = int(input())
    l = [1 for _ in range(n)]
    for i in range(2, n + 1):
        for j in range(i, n + 1, i):
            l[j-1] *= -1

    print(l.count(1))
