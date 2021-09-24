gt=[]



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
    
    
z=0
x=0
y=0
    
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
    
    for i in range(0,n):
        print(p[i],"\t\t",bt1[i],"\t",ct[i]," \t",tat[i],"\t",wt[i])
    
    z=ct[n-1]
    y=tat[n-1]
    x=wt[n-1]
 

number=int(input())
process=list(map(str,input().split()))
bursttime=list(map(int,input().split()))
queuenum=list(map(int,input("0-sjf 1-fcfs").split()))
sjf=[]
sjfbt=[]
fcfsbt=[]
fcfs=[]
for i in range(len(queuenum)):
    if queuenum[i]==0:
        sjf.append(process[i])
        sjfbt.append(bursttime[i])
    elif(queuenum[i]==1):
        fcfs.append(process[i])
        fcfsbt.append(bursttime[i])
    
calc_sjf(sjf,sjfbt)
calc_fcfs(fcfs,fcfsbt)

print()
for i in gt:
    print("|",i,end="|")
 