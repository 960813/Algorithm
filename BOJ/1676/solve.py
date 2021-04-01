def fact(n):
    if n <= 2:
        return n

    return n * fact(n - 1)


a = str(fact(int(input())))

if a == '0':
    print(0)
else:
    print(len(a) - len(a.rstrip('0')))
