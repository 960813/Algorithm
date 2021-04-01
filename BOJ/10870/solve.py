fibo = [0, 1]
n = int(input())
if n == 0 or n == 1:
    print(n)
    exit()

for _ in range(n - 1):
    fibo.append(fibo[-1] + fibo[-2])
    
print(fibo[-1])
