n = int(input())
a = int(input())
for i in range(n):
  op,b = input().split()
  b = int(b)
  if op == "+":
    a += b
  elif op == "-":
    a -= b
  elif op == "*":
    a *=  b
  elif op == "/" and b != 0:
    a //=  b
  else:
    print("error")
    break
  print(i+1,a)