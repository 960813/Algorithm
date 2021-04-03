while True:
    try:
        n = int(input())
    except EOFError:
        break
    if n == 1:
        print(1)
        continue
    num = 1
    while True:
        num = num * 10 + 1
        if num % n == 0:
            print(len(str(num)))
            break
