a, b = list(map(int, input().split()))
c = int(input())

h, m = divmod(b + c, 60)
h += a

print(h % 24, m)
