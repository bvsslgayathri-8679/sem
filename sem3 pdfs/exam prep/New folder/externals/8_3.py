n=int(input())
d=dict(input().split() for i in range(n))
d.update({8:9})
print(d)