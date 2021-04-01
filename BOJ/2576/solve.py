min_num = -1
result = 0
for _ in range(7):
    n = int(input())
    if n % 2 == 1:
        if result == 0:
            min_num = n
        elif n < min_num:
            min_num = n
        result += n

if result:
    print(result)
    print(min_num)
else:
    print(-1)
