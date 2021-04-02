case_number = 1
while True:
    N = int(input())
    if not N:
        break

    name = [input() for _ in range(N)]
    result = [-1 for _ in range(N)]
    for _ in range(2 * N - 1):
        s, A = input().split()

        result[int(s) - 1] *= -1

    for i in range(N):
        if result[i] == 1:
            print(case_number, name[i])

    case_number += 1
