L = int(input())
t, m = divmod(L, 5)
if m:
    t += 1
print(t)
