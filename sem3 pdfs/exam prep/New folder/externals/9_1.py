f=open("file1.txt","r")
l=f.read().split()
li=[]
for i in l:
    for j in i.split():
        li.append(j.lower())
li.sort()
f2=open("file2.txt","w")
for i in li:
    f2.write(i+"\n")
f.close()
f2.close()