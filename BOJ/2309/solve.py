import sys

dwarfs = []

for i in range(9):
    dwarfs.append(int(sys.stdin.readline()))

dwarfs.sort()

height_sum = 0
for val in dwarfs:
    height_sum = height_sum + val

for i in range(len(dwarfs)):
    for j in range(i + 1, len(dwarfs)):
        if height_sum - dwarfs[i] - dwarfs[j] == 100:
            for k in range(len(dwarfs)):
                if k == i or k == j:
                    continue
                else:
                    print(dwarfs[k])
            exit()
