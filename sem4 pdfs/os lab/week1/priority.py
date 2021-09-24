n=int(input())
p=list(map(str,input().split()))
pr=list(map(int,input().split()))
at=list(map(int,input().split()))
bt=list(map(int,input().split()))
pr1=pr.copy()
gt=[]
ct=[0]*n
tat=[0]*n
wt=[0]*n

ind=at.index(min(at))
pr[ind]=999999
ct[ind]=bt[ind]
gt.append(p[ind])
tat[ind]=ct[ind]-at[ind]
wt[ind]=tat[ind]-bt[ind]

pre=ind

while ct[pre]!=sum(bt):
    rind=pr.index(min(pr))
    if at[rind]>ct[pre]:
        pr1[rind]=999999
        rind=pr1.index(min(pr1))
    ct[rind]=ct[pre]+bt[rind]
    pre=rind
    tat[rind]=ct[rind]-at[rind]
    wt[rind]=tat[rind]-bt[rind]
    pr[rind]=999999
    gt.append(p[rind])

print("-----")
for i in range(0,n):
    print("|",gt[i],end="|")
print()

print("process id\tat\tct\tbt\ttat\twt\n")
for i in range(0,n):
    print(p[i],"\t\t",at[i],"\t\t",bt[i],"\t\t",ct[i],"\t\t",tat[i],"\t\t",wt[i])
        
