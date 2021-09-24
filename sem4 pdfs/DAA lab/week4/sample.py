'''import random
import math
import matplotlib.pyplot as plt
def partition(a,s,e):
    pivot=a[s]
    left=s+1
    right=e
    while True:
      while left<=right and a[left]<=pivot:
        left+=1
      while left<=right and a[right]>=pivot:
        right-=1
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
timelist=[]
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
for x in n:
    timelist.append(x*math.log(x,2))
plt.plot(comlist,n,color='green', linewidth=3,label='Quicksort time')
plt.plot(timelist,n,color='red', linewidth=3,label='nlogn')
plt.title('Quick Sort Running ime')
plt.xlabel('value of time')
plt.ylabel('value of n')
plt.legend()
plt.show()'''



import math
import random
import matplotlib.pyplot as plt

def partition(arr,l,h):
    i=l
    j=h
    global com
    piv=random.randint(l,h)
    pivot = arr[piv] 
    arr[piv] ,arr[l] = arr[l],arr[piv] 
    piv = l
    while(i<j):
        while arr[i]<= pivot and i<h:
            i+=1
            com+=1
        while arr[j]>pivot:
            j-=1
            com+=1
        if(i<j):
            com+=1
            arr[i],arr[j]=arr[j],arr[i]
    arr[j],arr[piv]=arr[piv],arr[j]

    return j


def quicksort(arr,l,h):
    if l<h:
        m=partition(arr,l,h)
        quicksort(arr,l,m-1)
        quicksort(arr,m+1,h)





complist=[]
n=int(input())
for i in range(1,n+1):
    arr1=[]
    for j in range(i):
        arr1.append(random.randint(1,100))
    
    com=1
    quicksort(arr1,0,len(arr1)-1)
    complist.append(com)
    





actual=[*range(1,n+1)]
actual1=[]
for i in actual:
    actual1.append(i*math.log(i,2))

plt.plot(complist,actual,color='red', linewidth=3,label='Mergesort time')
plt.plot(actual1,actual,color='black', linewidth=3,label='nlog n time')
plt.title('merge sort')
plt.xlabel('time')
plt.ylabel('n')
plt.legend()
plt.show()