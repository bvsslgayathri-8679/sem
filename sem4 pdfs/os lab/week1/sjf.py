n=int(input())
p=list(map(str,input().split()))
at=list(map(int,input().split()))
bt=list(map(int,input().split()))
#shortest job
bt1=bt.copy()
k=min(at)
ind=at.index(k)
gt=[]
tat=[0]*n
wt=[0]*n
ct=[0]*n
gt.append(p[ind])


ct[ind]=bt[ind]
tat[ind]=ct[ind]-at[ind]
wt[ind]=tat[ind]-bt[ind]

bt[ind]=999999
pre=ind
i=1
while i<n:
    r=min(bt)
    rind=bt.index(r)
    if at[rind]<ct[pre]:
        ct[rind]=ct[pre]+bt[rind]
        pre=rind
        tat[rind]=ct[rind]-at[rind]
        wt[rind]=tat[rind]-bt[rind]
        gt.append(p[rind])
        # print(rind,at[rind],ct[pre],gt[rind])
        bt[rind]=999999
        i+=1
print("-----")
for i in range(0,n):
    print("|",gt[i],end="|")
print()
print('Average completion time is \t:',sum(ct)/n)
print('Average turn around time is \t:',sum(tat)/n)
print('Average waiting time is \t:',sum(wt)/n)

print("process id\tat\tct\tbt\ttat\twt\n")
for i in range(0,n):
    print(p[i],"\t\t",at[i],"\t\t",bt1[i],"\t\t",ct[i],"\t\t",tat[i],"\t\t",wt[i])
        