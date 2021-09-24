n=int(input())
p=list(map(str,input().split()))
bt=list(map(int,input().split()))
bt1=bt.copy()
gt=[]
ct=[0]*n
wt=[0]*n
c=0
pre=-1
while max(ct)!=sum(bt1):
    r=bt.index(min(bt))
    if pre<0:
        ct[r]=bt[r]
    else:
        ct[r]=ct[pre]+bt[r]
    wt[r]=ct[r]-bt[r]
    pre=r
    gt.append(p[r])
    bt[r]=99999999

for i in gt:
    print("|",i,end="|")
print()
print("process id\tbt\tct\twt\n")
for i in range(0,n):
    print(p[i],"\t\t",bt1[i],"\t",ct[i],"\t",wt[i])
      