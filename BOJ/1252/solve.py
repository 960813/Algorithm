a, b = list(map(list, input().split()))

carry = 0
result = []
while min(len(a), len(b)):
    carry, val = divmod(int(a.pop()) + int(b.pop()) + carry, 2)
    result.insert(0, val)

while len(a):
    carry, val = divmod(int(a.pop()) + carry, 2)
    result.insert(0, val)

while len(b):
    carry, val = divmod(int(b.pop()) + carry, 2)
    result.insert(0, val)

if carry:
    result.insert(0, carry)

result = ''.join(map(str, result)).lstrip('0')
if result == '':
    result = '0'

print(result)
