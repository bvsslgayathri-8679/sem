gt=[]

def calc_rr(p,bt):
    tq=int(input('time quantum : '))
    bt1=bt.copy()
    rq=[]
    global gt
    n=len(p)
    tat=[0]*n
    wt=[0]*n
    ct=[0]*n
    pre=0
    ind=pre
    i=0
    val=0
    ss=sum(bt)
    global y
    global z
    global x
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
   
    print("process id\tbt\tct\ttat\twt\n")
    for i in range(0,n):
        print(p[i],"\t\t",bt1[i],"\t",ct[i]," \t",tat[i],"\t",wt[i])
    
    z=ct[n-1]
    y=tat[n-1]
    x=wt[n-1]


def calc_fcfs(p,bt):
    n=len(p)
    global gt
    ct=[0]*n
    wt=[0]*n
    i=0
    global y
    global z
    global x
    while i<n:
        if i==0:
            ct[i]=z+bt[i]
            wt[i]=x+ct[i]-bt[i]
        else:
            ct[i]=ct[i-1]+bt[i]
            
            wt[i]=ct[i]-bt[i]
        gt.append(p[i])
        i+=1
    tat=ct.copy()
    for i in range(0,n):
        print(p[i],"\t\t",bt[i],"\t",ct[i]," \t",tat[i],"\t",wt[i])
    print("average waiting time= ",sum(wt)/n)
    print("average tat time= ",sum(tat)/n)


    
    


number=int(input("number of processors : "))
process=list(map(str,input("list of processors : ").split()))
bursttime=list(map(int,input("bursttime : ").split()))
queuenum=list(map(int,input("queue number-->0-rr 1-fcfs :").split()))

fcfsbt=[]
fcfs=[]
rr=[]
rrbt=[]
for i in range(len(queuenum)):
    if queuenum[i]==0:
        rr.append(process[i])
        rrbt.append(bursttime[i])
    elif(queuenum[i]==1):
        fcfs.append(process[i])
        fcfsbt.append(bursttime[i])

calc_rr(rr,rrbt)
calc_fcfs(fcfs,fcfsbt)
print("gant chart is")
for i in gt:
    print("|",i,end="|")

    