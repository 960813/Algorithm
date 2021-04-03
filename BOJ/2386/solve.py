while True:
    S = input().split()
    if S[0] == '#':
        break
    print(S[0], ''.join(S[1:]).lower().count(S[0].lower()))
