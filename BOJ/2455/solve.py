curr = 0
result = 0
for _ in range(4):
    x, y = map(int, input().split())
    curr += -x + y
    result = max(curr, result)
print(result)
