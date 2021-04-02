import sys
from collections import deque

d = deque()

for _ in range(int(input())):
    o = sys.stdin.readline().split()
    if o[0] == 'push_front':
        d.appendleft(o[1])
    elif o[0] == 'push_back':
        d.append(o[1])
    elif o[0] == 'pop_front':
        if len(d):
            sys.stdout.write(d.popleft() + '\n')
        else:
            sys.stdout.write('-1\n')
    elif o[0] == 'pop_back':
        if len(d):
            sys.stdout.write(d.pop() + '\n')
        else:
            sys.stdout.write('-1\n')
    elif o[0] == 'size':
        sys.stdout.write(str(len(d)) + '\n')
    elif o[0] == 'empty':
        if len(d):
            sys.stdout.write('0\n')
        else:
            sys.stdout.write('1\n')
    elif o[0] == 'front':
        if len(d):
            sys.stdout.write(d[0] + '\n')
        else:
            sys.stdout.write('-1\n')
    elif o[0] == 'back':
        if len(d):
            sys.stdout.write(d[-1] + '\n')
        else:
            sys.stdout.write('-1\n')
