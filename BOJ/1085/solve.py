from sys import stdin

s = stdin.readline().split(' ')
x = int(s[0])
y = int(s[1])
w = int(s[2])
h = int(s[3])

print(min(x, y, w - x, h - y))