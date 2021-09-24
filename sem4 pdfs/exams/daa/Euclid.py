
def euclid(a,b):
    if(a%b==0):
        return b
    else:
        return euclid(b,a%b)
        
a=int(input())
b=int(input())
if(a<b):
    a,b=b,a
print(euclid(a,b))