for _ in range(int(input())):
    lst = []
    s = input()
    for w in s:
        if w == '(':
            lst.append(w)
        elif (w == ')' and len(lst) == 0) or lst.pop() != '(':
            print("NO")
            break
    else:
        if len(lst):
            print("NO")
        else:
            print("YES")
