n = int(input())
a =  list(map(int, input().split()))
total = 0
for i in range(n):
  total += a[i]

avg = total //n

for i in range(n):
  ans = abs(avg - a[i])
  print(ans)