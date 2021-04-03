for _ in range(int(input())):
    floor = int(input())
    num = int(input())
    lst = [x for x in range(1, num + 1)]
    for i in range(floor):
        for j in range(1, num):
            lst[j] += lst[j - 1]
    print(lst[-1])
