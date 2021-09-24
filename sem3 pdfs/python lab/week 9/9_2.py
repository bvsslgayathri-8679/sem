""" f=open("file1.txt","r")
s=""
for i in f:
    s+=i
    
    print(s)

print(s)

from collections import Counter
 """

from collections import Counter
li=[]
f=open("file1.txt","r")
l=f.read().split()
for i in l:
    for j in i.split():
        if j!='\n' or j!='\t':
            li.append(j)

mo=Counter(li)
print(mo.most_common(1)[0][0]," is the most common word in file")
