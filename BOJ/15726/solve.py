import math

a, b, c = map(int, input().split())

case1 = math.floor(a * b / c)
case2 = math.floor(a / b * c)
print(max(case1, case2))
