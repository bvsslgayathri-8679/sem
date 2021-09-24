n=int(input())
p=list(map(str,input().split()))
bt=list(map(int,input().split()))
gt=[]
ct=[0]*n
wt=[0]*n
i=0
while i<n:
    if i==0:
        ct[i]=bt[i]
    else:
        ct[i]=ct[i-1]+bt[i]
        gt.append(p[i])
    wt[i]=ct[i]-bt[i]
    i+=1
for i in gt:
    print("|",i,end="|")
print()
print("process id\tbt\tct\twt\n")
for i in range(0,n):
    print(p[i],"\t\t",bt[i],"\t",ct[i],"\t",wt[i])
      