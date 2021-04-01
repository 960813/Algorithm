T = int(input())
for _ in range(T):
    in_lst = input().split()
    result = float(in_lst[0])
    for i in range(1, len(in_lst)):
        if in_lst[i] == '@':
            result *= 3
        elif in_lst[i] == '%':
            result += 5
        elif in_lst[i] == '#':
            result -= 7

    print('%.2f' % result)