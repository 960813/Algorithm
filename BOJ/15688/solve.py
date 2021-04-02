import sys

lst = sorted([int(sys.stdin.readline()) for _ in range(int(sys.stdin.readline()))])
print('\n'.join(map(str, lst)))
