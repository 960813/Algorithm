lst = [input().split() for _ in range(int(input()))]
lst.sort(key=lambda n: (int(n[1]), int(n[0])))
for s in lst:
    print(s[0], s[1])
