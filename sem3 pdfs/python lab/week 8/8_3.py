n=int(input("number of key:value pairs in dictionary"))
d=dict(input("key and value ").split() for i in range(n))
d.update({"hello":"999"})
print(d)