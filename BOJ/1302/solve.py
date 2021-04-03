from collections import defaultdict

d = defaultdict(int)

for _ in range(int(input())):
    d[input()] += 1

print(sorted(sorted(d.items(), key=lambda y: y[0]), key=lambda x: x[1], reverse=True)[0][0])
