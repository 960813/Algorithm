for _ in range(int(input())):
    A, N = input().split('-')
    len_A = len(A)
    score_A = 0
    for i, a in enumerate(A):
        score_A += (ord(a) - 65) * pow(26, (len_A - i - 1))

    if abs(score_A - int(N)) <= 100:
        print('nice')
    else:
        print('not nice')
