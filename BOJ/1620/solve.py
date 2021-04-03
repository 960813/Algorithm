import sys

N, M = map(int, sys.stdin.readline().split())
dict_no = {}
dict_name = {}

for i in range(N):
    name = sys.stdin.readline().strip()
    dict_no[i + 1] = name
    dict_name[name] = i + 1

for i in range(M):
    target = sys.stdin.readline().strip()
    if target.isalpha():
        print(dict_name[target])
    else:
        print(dict_no[int(target)])
