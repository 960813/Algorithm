T = [64]
N = int(input())
while True:
    if sum(T) > N:
        T.sort()
        s = T.pop(0) // 2
        T += [s] * 2
        if sum(T[:-1]) >= N:
            T.pop()
    else:
        break
print(len(T))
