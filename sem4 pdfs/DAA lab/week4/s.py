import random
import math
import matplotlib.pyplot as plt
def partition(a,s,e):
    pivot=a[s]
    left=s+1
    right=e
    global com
    while True:
      while left<=right and a[left]<=pivot:
        left+=1
        com+=1
      while left<=right and a[right]>=pivot:
        right-=1
        com+=1
      if right<left:
        break
      else:
        a[left],a[right]=a[right],a[left]
    a[s],a[right]=a[right],a[s]
    return right
def quicksort(a,s,e):
  if s<e:
    p=partition(a,s,e)
    quicksort(a,s,p-1)
    quicksort(a,p+1,e)
comlist=[]
for p in range(200):
    com=1
    a=[]
    for i in range(0,p):
        n=random.randint(1,100)
        a.append(n)
    quicksort(a,0,len(a)-1)
    comlist.append(com)
n=[*range(1,201,1)]
nn=[]
for x in n:
    nn.append(x*math.log(x,2))
plt.plot(comlist,n,color='green', linewidth=3,label='Mergesort time')
plt.plot(nn,n,color='red', linewidth=3,label='nlogn')
plt.title('Merge Sort Running ime')
plt.xlabel('value of time')
plt.ylabel('value of n')
plt.legend()
plt.show()


import matplotlib.pyplot as plt
import time as t
import random
import math

def partition(arr,l,r):
    global com
    i=l
    p=j=r
    while i<j:
        
        while arr[i]<=arr[p] and i<r:
            i+=1
            com+=1
        
        while arr[j]>arr[p]:
            j-=1
            com+=1
        
        if i<j:
            arr[i],arr[j]=arr[j],arr[i]
            com+=1

    arr[p],arr[j]=arr[j],arr[p]
    return j



def Qsort(arr,l,r):
    if l<r:
        pivot=partition(arr,l,r)
        Qsort(arr,l,pivot-1)
        Qsort(arr,pivot+1,r) 

        
comlist=[]
timeList=[]
for j in range(200):
    arr=[]
    for i in range(1,j+1):
        ele=random.randint(1,100)
        arr.append(ele)
    com=1

    start = t.time()
    Qsort(arr,0,len(arr)-1)
    total=t.time()-start
    print(arr)
    timeList.append(total)
    comlist.append(com)
    

n=[*range(1,201,1)]
nlogn=[x*(math.log(x,2)) for x in n]
nn=[x*x for x in n]



plt.plot(timeList,n,color='red', linewidth=3,label='timelist')
plt.plot(nn,n,color='green', linewidth=3,label='n^2')
plt.plot(comlist,n,color='black', linewidth=3,label='quicksort time')
plt.plot(nlogn,n,color='blue', linewidth=3,label='nlogn')
plt.title('quick Sort Running ime')
plt.xlabel('value of time')
plt.ylabel('value of n')
plt.legend()
plt.show()