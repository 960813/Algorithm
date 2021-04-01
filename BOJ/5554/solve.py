s = 0
for _ in range(4):
    s += int(input())

x, y = divmod(s, 60)
print(x)
print(y)
