N, M = map(int, input().split())
dic = {}
result = []
for _ in range(N):
    dic[input()] = 1

for _ in range(M):
    target = input()
    if target in dic:
        result.append(target)
result.sort()
if len(result):
    print(str(len(result)) + '\n' + '\n'.join(result))
else:
    print(0)
