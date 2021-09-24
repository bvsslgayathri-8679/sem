n=int(input())
p=list(map(str,input().split()))
at=list(map(int,input().split()))
bt=list(map(int,input().split()))
at1=at.copy()
gt=[]
ct=[0]*n
tat=[0]*n
wt=[0]*n


k=min(at)
ind=at.index(k)
gt.append(p[ind])
ct[ind]=bt[ind]
tat[ind]=ct[ind]-at[ind]
wt[ind]=tat[ind]-bt[ind]
at[ind]=99999
pre=ind
i=0
while i<n-1:
    r=min(at)
    rind=at.index(r)
    kk=ct[pre]
    kkk=at[rind]
    if(at[rind]<=ct[pre]):
        ct[rind]=ct[pre]+bt[rind]
    elif(at[rind]>ct[pre]):
        ct[rind]=at[rind]+bt[rind]
    gt.append(p[rind])
    tat[rind]=ct[rind]-at[rind]
    wt[rind]=tat[rind]-bt[rind]
    pre=rind
    at[rind]=999999
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
    print(p[i],"\t\t",at1[i],"\t\t",bt[i],"\t\t",ct[i],"\t\t",tat[i],"\t\t",wt[i])
        

