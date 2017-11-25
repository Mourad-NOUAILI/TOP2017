from math import sqrt

def isCool(n, eps):
  sr = sqrt(n)
  cr = round(n**(1./3.))

  return abs(sr - round(sr)) < eps and abs(cr - round(cr)) < eps


print (abs(4**(1./3.) - round(4**(1./3.))) < 1e-9)
a, b = map(int, input().split())

eps = 1e-9

cnt = 0
for n in range (a, b+1):
  if isCool(n, eps):
    print (n)
