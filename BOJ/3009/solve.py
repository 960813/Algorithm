from sys import stdin

posX = []
posY = []
resX = -1
resY = -1
for i in range(3):
    x, y = map(int, stdin.readline().split())
    posX.append(x)
    posY.append(y)

for i in range(3):
    if posX.count(posX[i]) == 1:
        resX = posX[i]
    if posY.count(posY[i]) == 1:
        resY = posY[i]

print(resX, resY)
