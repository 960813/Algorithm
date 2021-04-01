a, b, c = list(map(int, input().split()))
d = int(input())

h, m = divmod(b * 60 + c + d, 3600)
m, s = divmod(c + d, 60)

h += a
m += b
print(h % 24, m % 60, s % 60)
