def prime(n):
    c=0
    for i in range(1,n+1):
        if n%i==0:c+=1
    if c==2:print(n)
    

for i in range(20,51):
    prime(i)