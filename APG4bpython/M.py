n = int(input())
t = list(map(int,input().split()))
minimum = min(t)
for i,v in enumerate(t):
    if v == minimum:
        print(i+1)
        break

