gt=[]

def calc_rr(p,bt):
    tq=int(input())
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
    # print("-----")
    # for i in gt:
    #     print("|",i,end="|")
    # print()
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
    # for i in gt:
    #     print("|",i,end="|")
    # print()
    # print("process id\tbt\tct\twt\n")
    for i in range(0,n):
        print(p[i],"\t\t",bt[i],"\t",ct[i]," \t",tat[i],"\t",wt[i])
    
    # z=ct[n-1]
    # y=tat[n-1]
    # x=wt[n-1]

    
def calc_sjf(p,bt):
    n=len(p)
    bt1=bt.copy()
    global gt
    ct=[0]*n
    wt=[0]*n
    c=0
    pre=-1
    global y
    global z
    global x
    count=0
    while count<n:
        r=bt.index(min(bt))
        if pre<0:
            ct[r]=z+bt[r]
            wt[r]=x+ct[r]-bt[r]
            
        else:
            ct[r]=ct[pre]+bt[r]
            wt[r]=ct[r]-bt[r]
        pre=r
        gt.append(p[r])
        bt[r]=99999999
        count+=1
    tat=ct.copy()
    # for i in gt:
    #     print("|",i,end="|")
    # print()
    # print("process id\tbt\tct\twt\n")
    for i in range(0,n):
        print(p[i],"\t\t",bt1[i],"\t",ct[i]," \t",tat[i],"\t",wt[i])
    
    z=ct[n-1]
    y=tat[n-1]
    x=wt[n-1]
      

number=int(input())
process=list(map(str,input().split()))
bursttime=list(map(int,input().split()))
multi=list(map(int,input("0-system process 1-interactive 2-batch").split()))
rr=[]
rrbt=[]
sjf=[]
sjfbt=[]
fcfsbt=[]
fcfs=[]
for i in range(len(multi)):
    if(multi[i]==0):
        rr.append(process[i])
        rrbt.append(bursttime[i])
    elif multi[i]==1:
        sjf.append(process[i])
        sjfbt.append(bursttime[i])
    elif multi[i]==2:
        fcfs.append(process[i])
        fcfsbt.append(bursttime[i])

calc_rr(rr,rrbt)
calc_fcfs(fcfs,fcfsbt)
calc_sjf(sjf,sjfbt)

print()
for i in gt:
    print("|",i,end="|")
