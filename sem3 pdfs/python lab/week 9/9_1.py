""" f=open("file1.txt","r")
f1=open("file2.txt","w")
for i in f:
    for j in i:
        if j.isupper():
            j=j.lower()
        f1.write(j)
    print(i)
f1.close()
f.close()


 """
""" f=open("file1.txt","r")
f1=open("file2.txt","w")
while 1:
    x=f.read(1)
    if not x:
        break
    x=x.lower()
    f1.write(x)
 """

# f1 = open("file1.txt",'r')
# l = f1.read().split("\n")
# lt = []
# for i in l:
#     for j in i.split():
#         lt.append(j.lower())
# lt.sort()
# print(lt)
# f2 = open("output.txt", "w")
# for i in lt:
#     f2.write(str(i)+"\n")
# f1.close()	
# f2.close()



li=[]
f1=open("file1.txt","r")
l=f1.read().split()
for i in l:
    for j in i.split():
        li.append(j.lower())

li.sort()

print(li)

f2=open("file2.txt","w")
for i in li:
    f2.write(i+"\n")

f1.close()
f2.close()