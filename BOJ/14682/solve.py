t = n = int(input())
k = int(input())
for i in range(1, k + 1):
    n += t * pow(10, i)

print(n)
