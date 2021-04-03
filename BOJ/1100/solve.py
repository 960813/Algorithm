lst = []
result = 0
for _ in range(8):
    lst.append(list(input()))

for i in range(len(lst)):
    for j in range(i % 2, len(lst[i]), 2):
        if lst[i][j] == 'F':
            result += 1

print(result)
