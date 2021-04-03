"""
1~9: 1자리 => 9: 9 * 1
10~99: 2자리 => 180: 90 * 2
100~999: 3자리 => 2700: 900 * 3
"""

n = input()
t = ln = len(n) - 1

result = 0
while t:
    result += 9 * (10 ** (ln - t)) * (ln - t + 1)
    t -= 1
result += ((int(n) - (10 ** ln)) + 1) * (ln + 1)
print(result)
