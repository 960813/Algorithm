def solution(phone_book):
    answer = True

    phone_book.sort()
    for i in range(len(phone_book) - 1):
        for j in range(i + 1, len(phone_book)):
            if phone_book[i] == phone_book[j][:len(phone_book[i])]:
                return False
    return answer


input_case_1 = list(map(str, [119, 97674223, 1195524421]))
input_case_2 = list(map(str, [123, 456, 789]))
input_case_3 = list(map(str, [12, 123, 1235, 567, 88]))

print(solution(input_case_1))
print(solution(input_case_2))
print(solution(input_case_3))

