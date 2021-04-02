N, K = map(int, input().split())
result = []
lst = [i + 1 for i in range(N)]
K -= 1
T = K
while len(lst) > 0:
    if T >= len(lst):
        T = T % len(lst)
    result.append(lst.pop(T))
    T += K

print(f'<{", ".join(map(str, result))}>')
