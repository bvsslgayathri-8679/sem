n=int(input()) 
p=list(map(str,input().split()))
bt=list(map(int,input().split()))
tq=int(input())
bt1=bt.copy()
rq=[]
gt=[]
tat=[0]*n
wt=[0]*n
ct=[0]*n
pre=0
ind=pre
i=0
val=0
ss=sum(bt)
while(1):
    while(i<len(p) and bt[i]!=0):
        rq.append(p[i])
        i+=1
    if(len(rq)==0):
        break
    ele=rq[0]
    rq.remove(ele)
    gt.append(ele)
    ind=p.index(ele)
    if(bt[ind]<tq):
        val+=bt[ind]
        bt[ind]=bt[ind]-tq
    else:    
        bt[ind]=bt[ind]-tq
        val+=tq
    if(bt[ind]<=0):
        ct[ind]=val
        wt[ind]=ct[ind]-bt1[ind]
        tat[ind]=wt[ind]+bt1[ind]
    if(bt[ind]>0):
        rq.append(p[ind])
print("-----")
for i in gt:
    print("|",i,end="|")
print()
print("process id\tbt\tct\ttat\twt\n")
for i in range(0,n):
    print(p[i],"\t\t",bt1[i],"\t",ct[i]," \t",tat[i],"\t",wt[i])
        