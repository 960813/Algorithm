lst = list(map(int, input().split()))

calc = 0

while len(lst):
    calc += lst.pop() ** 2

print(calc % 10)
