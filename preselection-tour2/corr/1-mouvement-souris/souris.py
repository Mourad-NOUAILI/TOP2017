c, r = map(int,input().split())

x, y = 0, 0
while True:
  a, b = map(int, input().split())
  if a == 0 and b == 0:
    break

  x += a
  y += b

  if x < 0:
    x = 0

  if x > c:
    x = c

  if y < 0:
    y = 0

  if y > r:
    y = r

  a = x
  b = y

  print (str(x)+" "+str(y))
