"""
7 3
1) 1 2 3 4 5 6 7
2) 1 2 4 5 6 7
3) 1 2 4 5 7
4) 1 4 5 7
"""

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
