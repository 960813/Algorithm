import sys

result = []
for _ in range(int(input())):
    s = sys.stdin.readline().split()
    sz = len(result)
    if s[0] == 'push':
        result.append(s[1])
    elif s[0] == 'pop':
        if sz:
            sys.stdout.write(result.pop() + '\n')
        else:
            sys.stdout.write('-1' + '\n')
    elif s[0] == 'size':
        sys.stdout.write(str(sz) + '\n')
    elif s[0] == 'empty':
        sys.stdout.write('0' + '\n' if sz else '1' + '\n')
    elif s[0] == 'top':
        if sz:
            sys.stdout.write(result[-1] + '\n')
        else:
            sys.stdout.write(str(-1) + '\n')
