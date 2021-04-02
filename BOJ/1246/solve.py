N, M = map(int, input().split())
lst = []
rs_c = rs_p = 0
for _ in range(M):
    lst.append(int(input()))

lst.sort()

for i in range(M):
    if min(N, M - i) * lst[i] > rs_p:
        rs_p = min(N, M - i) * lst[i]
        rs_c = lst[i]

print(rs_c, rs_p)
