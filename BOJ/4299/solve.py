x, y = map(int, input().split())

if x + y < 0 or x - y < 0 or (x + y) % 2 != 0:
    print(-1)
else:
    a = (x - y) // 2
    b = x - a
    print(max(a, b), min(a, b))
