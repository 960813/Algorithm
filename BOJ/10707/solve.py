A = int(input())
B = int(input())
C = int(input())
D = int(input())
P = int(input())

PA = A * P
if P <= C:
    PB = B
else:
    PB = B + (P - C) * D

print(min(PA, PB))
