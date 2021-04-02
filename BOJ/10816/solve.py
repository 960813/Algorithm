from _collections import defaultdict

d = defaultdict(int)
N = input()
for i in input().split():
    d[i] += 1

M = input()

for card in input().split():
    c = d.get(card)
    if not c:
        c = 0
    print(c, end=' ')
