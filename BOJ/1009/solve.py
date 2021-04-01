t = int(input())
for _ in range(t):
    a, b = map(int, input().split())

    result = a
    b = b % 4 + 4
    for n in range(1, b):
        result = (result * a) % 10

    if result == 0:
        print('10')
    else:
        print(result)
