while True:
    n = int(input())
    if n == 0:
        break

    lst = sorted([input() for _ in range(n)], key=lambda x: x.lower())
    print(lst[0])