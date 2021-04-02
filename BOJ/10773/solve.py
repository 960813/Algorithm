from collections import deque

result = 0
lst = deque([int(input()) for _ in range(int(input()))])

for i in range(len(lst)):
    n = lst.popleft()
    if n:
        result += n
        lst.append(n)
    else:
        result -= lst.pop()
print(result)
