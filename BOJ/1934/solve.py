from math import gcd


def lcm(a, b):
    return int(abs((a * b) / gcd(a, b)))


for _ in range(int(input())):
    a, b = map(int, input().split())
    print(lcm(a, b))
