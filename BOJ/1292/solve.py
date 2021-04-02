A, B = map(int, input().split())
result = []
for i in range(1, 46):
    result += [i] * i

print(sum(result[A - 1:B]))
