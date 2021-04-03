import sys

stk1 = list(sys.stdin.readline().strip())
stk2 = []
for _ in range(int(sys.stdin.readline())):
    o = sys.stdin.readline().split()
    if o[0] == 'L' and stk1:
        stk2.append(stk1.pop())
    elif o[0] == 'D' and stk2:
        stk1.append(stk2.pop())
    elif o[0] == 'B' and stk1:
        stk1.pop()
    elif o[0] == 'P':
        stk1.append(o[1])
print(''.join(stk1 + list(reversed(stk2))))
