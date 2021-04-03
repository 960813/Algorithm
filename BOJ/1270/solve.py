from collections import defaultdict

for _ in range(int(input())):
    T = list(map(int, input().split()))
    Ti = T[0]
    Tj = T[1:]

    soldier = defaultdict(int)
    for j in Tj:
        soldier[j] += 1

    q = sorted(soldier.items(), key=lambda x: x[1], reverse=True)[0]
    if q[1] > Ti // 2:
        print(q[0])
    else:
        print("SYJKGW")
