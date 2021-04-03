while True:
    S = input().lower()
    if S == '#':
        break
    print(S.count('a') + S.count('e') + S.count('i') + S.count('o') + S.count('u'))
