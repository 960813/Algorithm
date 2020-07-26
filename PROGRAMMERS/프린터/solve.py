class Pair:
    def __init__(self):
        self.priority = 0
        self.location = 0

    def setData(self, priority, location):
        self.priority = priority
        self.location = location

    def priority(self):
        return self.priority

    def location(self):
        return self.location


def solution(priorities, location):
    pairs = []
    for i in range(len(priorities)):
        pair = Pair()
        pair.location = i
        pair.priority = priorities[i]
        pairs.append(pair)

    print_count = 0
    while True:
        found = False
        for i in range(1, len(pairs)):
            if pairs[0].priority < pairs[i].priority:
                found = True
                break

        first_pair = pairs.pop(0)
        if found:
            pairs.append(first_pair)
        else:
            print_count += 1
            if first_pair.location == location:
                return print_count
