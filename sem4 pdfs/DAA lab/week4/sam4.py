import random
import math
import time
import matplotlib.pyplot as plt

def partition(arr,l,h):
    i=l
    j=h
    p=int((l+h)/2)
    global com
    while i<j:
        while arr[p]>=arr[i] and i<h:
            i+=1
            com+=1
        while arr[p]<arr[j]:
            j-=1
            com+=1
        if i<j:
            arr[i],arr[j]=arr[j],arr[i]
            com+=1
    
    arr[j],arr[p]=arr[p],arr[j]
    return j



def quicksort(arr,l,h):
    if l<h:
        m=partition(arr,l,h)
        quicksort(arr,l,m-1)
        quicksort(arr,m+1,h) 

comlist=[]
timeList=[]
n=int(input())
for j in range(n):
    arr=[]
    for i in range(0,j):
        ran=random.randint(1,100)
        arr.append(ran)
    com=1

    start = time.time()

    quicksort(arr,0,len(arr)-1)
    total=time.time()-start
    print(arr)
    timeList.append(total)
    comlist.append(com)
print(sum(timeList)/len(timeList))
    #print(arr)

n1=[*range(1,n+1,1)]
nn=[]
nn1=[]
for x in n1:
    nn.append(x*x)
    nn1.append(x*math.log(x,2))
#print(nn,n1)
plt.plot(timeList,n1,color='blue', linewidth=3,label='timelist')

plt.plot(nn,n1,color='green', linewidth=3,label='n^2')
plt.plot(comlist,n1,color='black', linewidth=3,label='quicksort time')
plt.plot(nn1,n1,color='red', linewidth=3,label='nlogn')

plt.title('quick Sort Running ime')
plt.xlabel('value of time')
plt.ylabel('value of n')
plt.legend()
plt.show()
