from collections import Counter
f=open("file1.txt","r")
l=f.read().split()
li=[]
for i in l:
    for j in i.split():
        li.append(i)
c=Counter(li)
print(c.most_common(1)[0][0])