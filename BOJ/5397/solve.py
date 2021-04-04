import sys

for _ in range(int(input())):
    left, right = [], []

    for key in sys.stdin.readline().strip():
        if key == '<':
            if len(left):
                right.append(left.pop())
        elif key == '>':
            if len(right):
                left.append(right.pop())
        elif key == '-':
            if len(left):
                left.pop()
        else:
            left.append(key)

    while right:
        left.append(right.pop())

    print(''.join(left))
