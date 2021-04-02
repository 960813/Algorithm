from collections import deque

N = int(input())
lst = deque([N - i for i in range(N)])
while len(lst) != 1:
    lst.pop()
    lst.insert(0, lst.pop())

print(lst[0])
