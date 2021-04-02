result = []
for _ in range(int(input())):
    word = str(input())
    result.append((word, len(word)))

result = list(set(result))

result.sort(key=lambda w: (w[1], w[0]))

for w in result:
    print(w[0])
