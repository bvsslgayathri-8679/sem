f1=open('file1.txt','r')
f2=open('file2.txt','w')
while 1:
    x=f1.read(1)
    if not x:
        break
    x=x.lower()
    f2.write(x)
