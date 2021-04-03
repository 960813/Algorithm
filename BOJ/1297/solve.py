import math

r, h, w = map(int, input().split())
p = r / math.sqrt(h ** 2 + w ** 2)
print(math.floor(p * h), math.floor(p * w))
