t = int(input())
lst = sorted(list(map(int, input().split())))

print(lst[0] * lst[-1])

# 9: 1 (3) 9
# 4: 1 (2) 4
# 8: 1 (2) (4) 8
# 12: 1 (2) (3) (4) (6) 12
# 20: 1 (2) (4) (5) (10) 20
# 25: 1 (5) 25
