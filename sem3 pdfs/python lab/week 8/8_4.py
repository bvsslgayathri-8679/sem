n=int(input("number of key:value pairs in dictionary"))
d=dict(input("key and value ").split() for i in range(n))
print("sum of all values in dictionary is",sum([int(d[i])for i in d]))