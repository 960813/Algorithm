cAlphabet = ["c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="]

data = input()

for elm in cAlphabet:
    data = data.replace(elm, '@')

print(len(data))