n, k = list(map(int, input().split()))

result = [1]
for i in range(2, n // 2 + 1):
    if n % i == 0:
        result.append(i)

if n != 1:
    result.append(n)

if len(result) < k:
    print(0)
else:
    print(result[k - 1])
