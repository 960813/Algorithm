A, B = map(int, input().split())
X, Y = divmod(A, B)
if A != 0 and B < 0:
    X, Y = X + 1, Y - B
print(X)
print(Y)
