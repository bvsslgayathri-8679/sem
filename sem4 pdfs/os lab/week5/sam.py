p=list(input().split())
p1=p.copy()
p_alloc=[]
r=int(input())
for i in range(len(p)):
    p_alloc.append(list(map(int,input().split())))

max_=[]
tot=[]
for i in range(len(p)):
    max_.append(list(map(int,input().split())))
tot.append(list(map(int,input().split())))
need=[]
avail=[]
for i in range(r):
    avail[i]=tot[i]-sum([p_alloc[i] for i in range(len(p))])
for i in range(len(p)):
    for j in range(r):
        need[i]=max_[i]-p_alloc[i][j]

i=c=0
seq=[]
while c!=len(p):
    if need[i]<=Aavail and need[i]<=Bavail and need[i]<=Cavail and p[i]!='x':
        seq.append(p[i])
        p[i]='x'
        c+=1
        for j in range(r):
            avail[i]=avail[i]+p_li[i][j]

    
    
    if i<len(p)-1:
        i+=1
    else:
        i=0

print('need array is ')
for i in range(len(p)):
    for j in range(r):
        print(p1[i],":",need[i][j])
print("Safe sequence of execution is")
print(seq)    

'''
p1 p2 p3 p4 p5
0 2 3 2 0
1 0 0 1 0
0 0 2 1 2
7 3 9 4 5
5 2 0 2 3
3 2 2 2 3
10
5
7
'''