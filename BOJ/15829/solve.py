L = int(input())
S = input()
result = 0
for i, w in enumerate(S):
    result += pow(31, i) * (ord(w) - 96)
print(result % 1234567891)
