for _ in range(int(input())):
    H, W, N = map(int, input().split())
    y = N % H
    x = N // H
    if y == 0:
        y = H
    else:
        x += 1
    if x >= 10:
        print(f'{y}{x}')
    else:
        print(f'{y}0{x}')
