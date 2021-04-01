import sys

n = int(input())
lst = []
for _ in range(n):
    lst.append(int(sys.stdin.readline()))

sys.stdout.write('\n'.join(map(str, sorted(lst))))
