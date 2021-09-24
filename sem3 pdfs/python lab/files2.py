from collections import Counter
li=[]
f1=open('file1.txt','r')
for i in f1:
    for j in i.split():
        if j!='\n' or j!='\t':
            li.append(j)

count=Counter(li)
print(li)
print(count.most_common(1)[0])