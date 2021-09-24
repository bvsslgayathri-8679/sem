a,b=input().split(',')
for i in a:
    if i in b:
        print(i)

c=set(a).intersection(set(b))
print(c)