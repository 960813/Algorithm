lst = sorted([int(input()) for _ in range(3)])

if sum(lst) != 180:
    print('Error')
elif lst[0] == lst[1] == lst[2]:
    print('Equilateral')
elif lst[0] == lst[1] or lst[1] == lst[2]:
    print('Isosceles')
else:
    print('Scalene')
