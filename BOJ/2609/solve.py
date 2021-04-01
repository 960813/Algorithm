from math import gcd


def lcm(x, y, g):
    return x * y // g


a, b = list(map(int, input().split()))
g = gcd(a, b)
l = lcm(a, b, g)

print(g)
print(l)
