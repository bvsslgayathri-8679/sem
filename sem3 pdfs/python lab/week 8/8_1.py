res=dict()
for i in range(5):
    res[i]=i*i 
print(res)

d={i:i*i for i in range(5)}
print(d) 

n=int(input())
print({i:i*i for i in range(1,n+1)})
