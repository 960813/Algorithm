for _ in range(int(input())):
    doc_count, doc_pointer = map(int, input().split())
    prior = []
    for i, v in enumerate(map(int, input().split())):
        prior.append((i, v))

    result = 1
    pointer = 0
    while True:
        for j in range(pointer + 1, len(prior)):
            if prior[pointer][1] < prior[j][1]:
                prior.append(prior.pop(0))
                pointer = 0
                break
        else:
            if prior.pop(0)[0] == doc_pointer:
                print(result)
                break
            result += 1
