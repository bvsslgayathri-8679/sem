n=int(input())
print({i:i*i for i in range(1,n+1)})


dic={}
for i in range(1,n+1):
    dic[i]=i*i
print(dic)