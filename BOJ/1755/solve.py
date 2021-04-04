lst = ['zero', 'one', 'two', 'three', 'four', 'five', 'six', 'seven', 'eight', 'nine']
result = []

M, N = map(int, input().split())
for n in range(M, N + 1):
    s = []
    for w in str(n):
        s.append(lst[int(w)])
    result.append((n, ' '.join(s)))

result.sort(key=lambda x: x[1])
for i in range(len(result) // 10):
    for j in range(10):
        print(result[i * 10 + j][0], end=' ')
    print()

for i in range(len(result) % 10):
    print(result[(len(result) // 10) * 10 + i][0], end=' ')
