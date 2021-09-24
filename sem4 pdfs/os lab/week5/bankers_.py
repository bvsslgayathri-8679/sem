import numpy
def safe_sequence():
    global p,alloc,avail,max_,total,resourse,need
    for i in range(len(p)):
        for j in range(resourse):
            need[i][j]=max_[i][j]-alloc[i][j]

    for i in range(resourse):
        sum1=0
        for j in range(len(p)):
            sum1+=alloc[i][j]
        avail[i]=total-sum1
    print(avail)
    for i in range(len(p)):
        flag=1
        for j in range(resourse):
            if avail[i]<need[i][j]:
                flag=0
            if flag==1:
                avail[i]+=need
        if(flag==1):
            for k in range(resourse):
                avail[i]=avail[i]+need[i][j]
            print(need[i])
            need.remove(need[i])


p=list(input().split())
resourse=int(input('no of resources :'))
alloc=[]
max_=[]
total=list(map(int,input().split()))
avail=list(map(int,input().split()))
for i in range(len(p)):
    alloc.append(list(map(int,input().split())))
numpy.array(alloc)
for i in range(len(p)):
    max_.append(list(map(int,input().split())))
numpy.array(max_)

need=[[0]*resourse]*len(p)
numpy.array(need)

safe_sequence()

print(alloc)
'''
p1 p2 p3 p4 p5
3
10 5 7
3 3 2
0 1 0
2 0 0
3 0 2
2 1 1
0 0 2
7 5 3
3 2 2
9 0 2
4 2 2
5 3 3
'''

'''
def safe_sequence():
    global p,alloc,avail,max_,total,resourse
    for i in range(len(p)):
        for j in range(resourse):
            need[i][j]=max_[i][j]-alloc[i][j]

    for i in range(len(resourse)):
        sum1=0
        for j in range(len(p)):
            sum1+=alloc[i][j]
        avail[i]=total-sum1
    print(avail)
    for i in range(len(p)):
        flag=1
        for j in range(len(resourse)):
            if avail[i]<need[i][j]:
                flag=0
            if flag==1:
                avail[i]+=need
        if(flag==1):
            for k in range(len(resourse)):
                avail[i]=avail[i]+need[i][j]
            print(need[i])
            need.remove(need[i])


p=list(input().split())
resourse=int(input('no of resources :'))
alloc=[0]*len(resourse)
max_=[0]*len(resourse)
total=list(map(int,input().split()))
avail=list(map(int,input().split()))
for i in range(len(p)):
    alloc.append(list(map(int,input().split())))
    
for i in range(len(p)):
    max_.append(list(map(int,input().split())))

need=[[]*len(p)]

safe_sequence()

print(alloc)'''
'''
p1 p2 p3 p4 p5
3
10 5 7
3 3 2
0 1 0
2 0 0
3 0 2
2 1 1
0 0 2
7 5 3
3 2 2
9 0 2
4 2 2
5 3 3
'''