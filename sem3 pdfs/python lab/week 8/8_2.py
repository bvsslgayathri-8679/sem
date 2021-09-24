""" n=int(input())
d=dict()
for i in range(n):d.update(name=input(),key=input())
k=input()
print({d[key] for key in d if key==k}) """

n=int(input("number of key:value pairs in dictionary"))
d=dict(input("key and value ").split() for i in range(n))
k=input("key ")
""" for i in d:
    if i==k:
        print(d[i]) """
#print("key's corresponding value is ",{d[i] for i in d if i==k})
l={d[i] for i in d if i==k}
if l:print("key is found in dictionary and its corresponding value is ",l)
else:print("key not found in dictionary")