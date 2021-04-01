a, b = list(map(int, input().split()))
result = a - b

if result < 0:
    result *= -1

print(result)
