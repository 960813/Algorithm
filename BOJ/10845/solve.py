import sys
from collections import deque

queue = deque()
for _ in range(int(input())):
    o = sys.stdin.readline().split()
    if o[0] == 'push':
        queue.append(int(o[1]))
    elif o[0] == 'pop':
        if len(queue):
            print(queue.popleft())
        else:
            print(-1)
    elif o[0] == 'size':
        print(len(queue))
    elif o[0] == 'empty':
        if len(queue):
            print(0)
        else:
            print(1)
    elif o[0] == 'front':
        if len(queue):
            print(queue[0])
        else:
            print(-1)
    elif o[0] == 'back':
        if len(queue):
            print(queue[-1])
        else:
            print(-1)
