N, W, H, L = map(int, input().split())

C = (W // L) * (H // L)
if C > N:
    print(N)
else:
    print(C)
