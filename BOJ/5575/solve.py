for _ in range(3):
    s = list(map(int, input().split()))
    enter = s[0] * 3600 + s[1] * 60 + s[2]
    ext = s[3] * 3600 + s[4] * 60 + s[5]
    work = ext - enter

    h, m = divmod(work, 3600)
    m, s = divmod(m, 60)
    print(h, m, s)
