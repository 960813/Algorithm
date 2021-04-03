while True:
    sentence = input()
    lst = []
    if sentence == '.':
        break

    for word in sentence:
        if word == '(' or word == '[':
            lst.append(word)
        elif word == ')':
            if not len(lst) or lst.pop() != '(':
                print('no')
                break
        elif word == ']':
            if not len(lst) or lst.pop() != '[':
                print('no')
                break
    else:
        if len(lst):
            print('no')
        else:
            print('yes')
