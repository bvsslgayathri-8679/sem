n = int(input("Enter no. of processes: "))
process = list(map(str, input("Process:").split()))
Bursttime = list(map(int, input("Burst time: ").split()))
priority =list(map(int, input("Priority: ").split()))
Queuepriority =list(map(int, input("Queue Priority: ").split()))

#assuming arrival for all processes is 0
#Q1 = Priority, non preemptive
#Q2 = SJF, non preemptive
gantchart = []
comptime = [0]*n
waitingtime = [0]*n
tat = [0]*n
rt = [0]*n
val = 0
hold = [] 

for i in range(n):
    ind = priority.index(min(priority)) 

    if Queuepriority[ind]!= min(Queuepriority):
        hold.append(ind)
    else:
        gantchart = gantchart + [(process[ind])]
        comptime[ind] = val + Bursttime[ind]
        tat[ind] = comptime[ind]-0 #At[ind]
        waitingtime[ind] = tat[ind]-Bursttime[ind]
        rt[ind] = val- 0 #At[ind]
        val += Bursttime[ind]
    priority[ind]=99999

for i in hold:
    gantchart = gantchart + [(process[i])]
    comptime[i] = val + Bursttime[i]
    tat[i] = comptime[i]-0 #At[ind]
    waitingtime[i] = tat[i]-Bursttime[i]
    rt[i] = val- 0 #At[ind]
    val += Bursttime[i]

print("Processes       :", process)
print("Completion time :",comptime)
print("Turn Around time:",tat)
print("Waiting time    :",waitingtime)
print("Response time   :",rt)
print("Gantt Chart     :",gantchart)
print("Avg Turn Around Time:", round(sum(tat)/n,2))
print("Avg Wating Time     :", round(sum(waitingtime)/n,2))