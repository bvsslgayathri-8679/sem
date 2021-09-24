n=int(input())
d=dict(input().split() for i in range(n))
k=input()
l={d[i] for i in d if i==k}
if l:print('key found and its value is',l)
else:print('not found')
