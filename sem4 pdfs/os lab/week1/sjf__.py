# n = int(input("Enter no. of processes: "))
# process = list(map(str, input("Process: ").split()))
# At = list(map(int, input("Arrival time: ").split()))
# Bt = list(map(int, input("Burst time: ").split()))
# gc = []
# ct = [0]*n
# wt = [0]*n
# tat = [0]*n
# rt = [0]*n
# val = 0
# x = At.index(min(At))
# for i in range(n):
    
#     if At[x]>val:
#         x = At.index(min(At))
#     gc = gc + [(process[x])]
#     ct[x] = val + Bt[x]
#     tat[x] = ct[x]-At[x]
#     wt[x] = tat[x]-Bt[x]
   
#     val += Bt[x] 
#     Bt[x]=99999
#     x = Bt.index(min(Bt))

# print("Processes :", process)
# print("Completion time :",ct)
# print("Turn Around time:",tat)
# print("Waiting time :",wt)
# print("Gantt Chart :",gc)
# print("Avg Turn Around Time:", round(sum(tat)/n,3))
# print("Avg Wating Time :", round(sum(wt)/n,3))



n = int(input("Enter no. of processes: "))
process = list(map(str, input("Process: ").split()))
At = list(map(int, input("Arrival time:").split()))
Bt = list(map(int, input("Burst time: ").split()))
gc = []
ct = [0]*n
wt = [0]*n
tat = [0]*n
rt = [0]*n
val = 0
x = At.index(min(At))
for i in range(n):
 if At[x]>val:
    x = At.index(min(At))
 
 gc = gc + [(process[x])]
 ct[x] = val + Bt[x]
 tat[x] = ct[x]-At[x]
 wt[x] = tat[x]-Bt[x]
 rt[x] = val-At[x] 
 val += Bt[x]
 Bt[x]=99999
 x = Bt.index(min(Bt))
 
print("Processes :", process)
print("Completion time :",ct)
print("Turn Around time:",tat)
print("Waiting time :",wt)
print("Response time :",rt)
print("Gantt Chart :",gc)
print("Avg Turn Around Time:", round(sum(tat)/n,3))
print("Avg Wating Time :", round(sum(wt)/n,3))