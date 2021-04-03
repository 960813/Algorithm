ch, cm, cs = map(int, input().split(':'))
th, tm, ts = map(int, input().split(':'))

c = ch * 3600 + cm * 60 + cs
t = th * 3600 + tm * 60 + ts

if c > t:
    t += 24 * 3600

n = t - c
nh, nm = divmod(n, 3600)
nm, ns = divmod(nm, 60)

if nh == nm == ns == 0:
    nh = 24

print(f'{str(nh).zfill(2)}:{str(nm).zfill(2)}:{str(ns).zfill(2)}')
