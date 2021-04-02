import sys

_ = sys.stdin.readline()
A = set(sys.stdin.readline().split())
_ = sys.stdin.readline()
M = sys.stdin.readline().split()
for m in M:
    if m in A:
        sys.stdout.write('1\n')
    else:
        sys.stdout.write('0\n')
