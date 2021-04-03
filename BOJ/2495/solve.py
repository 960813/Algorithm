for _ in range(3):
    S = list(map(int, list(input())))
    result = 1
    for i in range(len(S) - 1):
        n = 1
        pointer = 1
        while (i + pointer) < len(S) and S[i] == S[i + pointer]:
            pointer += 1
            n += 1
            result = max(result, n)
    print(result)
