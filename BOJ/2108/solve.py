from collections import defaultdict
import sys

N = int(sys.stdin.readline())
lst = sorted([int(sys.stdin.readline()) for _ in range(N)])

target = defaultdict(int)
tl = []
for i in lst:
    target[i] += 1

for k, v in target.items():
    tl.append((k, v))

tl.sort(key=lambda w: w[1], reverse=True)

print(round(sum(lst) / N))
print(lst[N // 2])
if len(tl) >= 2 and (tl[0][1] == tl[1][1]):
    print(tl[1][0])
else:
    print(tl[0][0])
print(max(lst) - min(lst))
