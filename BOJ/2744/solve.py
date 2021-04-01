s = input()
r = ''

for w in s:
    if w.isupper():
        r += w.lower()
    else:
        r += w.upper()

print(r)