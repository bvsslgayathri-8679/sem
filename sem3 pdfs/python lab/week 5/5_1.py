""" li=list(map(int,input().split()))
print(li)
li.append(10)
print(li)
li.insert(1,12)
print(li)
li.extend([123,143])
print(li)

print(li[1:])
print(li[:5])
print(li[1:6])
print(li[:-1])
print(li[-5:-1])
print(li[1:7:2])

li[1:4]=[100,300,400]
print(li)

li[1]=[100,300,400]
print(li)

li[5:8]=[1]
print(li) """


li1=['Gayathri',2,'Rajahmundry','Vizag',5,7]
li2=['Kavitha',13,'Hyderabad','vizag',6,12]
print(li1+li2)
li1.append(234)
li1.insert(1,13)
print(li1)
print(li1[1:4])