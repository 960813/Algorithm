import sys
import copy


def check_board(board, N):
    ret = 0
    for i in range(N):
        res = 1
        for j in range(N - 1):
            if board[i][j] == board[i][j + 1]:
                res += 1
            else:
                ret = max(ret, res)
                res = 1
        ret = max(ret, res)

    for i in range(N):
        res = 1
        for j in range(N - 1):
            if board[j][i] == board[j + 1][i]:
                res += 1
            else:

                ret = max(ret, res)
                res = 1
        ret = max(ret, res)

    return ret


N = int(sys.stdin.readline())
board = []
candy_cnt = 0
for i in range(N):
    board.append(sys.stdin.readline().replace('\n', ''))

for i in range(N):
    for j in range(N - 1):
        tmp = copy.deepcopy(board)
        if tmp[i][j] != tmp[i][j + 1]:
            tmp[i] = tmp[i][:j] + tmp[i][j + 1] + tmp[i][j] + tmp[i][j + 2:]
            candy_cnt = max(candy_cnt, check_board(tmp, N))

for i in range(N):
    for j in range(N - 1):
        tmp = copy.deepcopy(board)
        if tmp[j][i] != tmp[j + 1][i]:
            tmp_row = tmp[j][:i] + tmp[j + 1][i] + tmp[j][i + 1:]
            tmp[j + 1] = tmp[j + 1][:i] + tmp[j][i] + tmp[j + 1][i + 1:]
            tmp[j] = tmp_row
            candy_cnt = max(candy_cnt, check_board(tmp, N))

print(candy_cnt)
