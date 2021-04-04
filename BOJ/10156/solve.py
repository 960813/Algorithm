K, N, M = map(int, input().split())
S = K * N - M
if S < 0:
    S = 0
print(S)
