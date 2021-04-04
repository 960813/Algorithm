shortcut = []
for _ in range(int(input())):
    result = input()
    inp = result.split()
    re = ' '.join(inp)
    for i in range(len(inp)):
        if inp[i][0].upper() not in shortcut:
            shortcut.append(inp[i][0].upper())
            left = ' '.join(inp[:i]).strip()
            right = ' '.join(inp[i:])[1:]

            if left:
                left += ' '

            result = left + '[' + inp[i][0] + ']' + right
            break
    else:
        for i in range(len(re)):
            if re[i] != ' ' and re[i].upper() not in shortcut:
                shortcut.append(re[i].upper())
                result = re[:i] + '[' + re[i] + ']' + re[i + 1:]
                break
    print(result)
