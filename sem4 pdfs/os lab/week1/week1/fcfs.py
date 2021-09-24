print("input process list, burst time and arrival time ")
n=int(input("number of processes "))
li=[]
for i in range(n):
    li.append(list(map(int,input().split())))
    
li=sorted(li,key=lambda x:x[2],reverse=False)
print(li,sorted(li,key=lambda x:x[2]))
ct=0
wt=0
for i in range(n):
    ct+=li[i][1]
    li[i].append(ct)
    li[i].append(li[i][3]-li[i][1])

print(li)
    
for i in range(n):
    
    print(li[i][0],li[i][1],li[i][3],li[i][4])