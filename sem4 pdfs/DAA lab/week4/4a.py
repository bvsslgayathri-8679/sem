import random
import math
import time
import timeit
import matplotlib.pyplot as plt

def partition(arr,l,h):
    i=l
    j=h
    p=l
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

def piv_find(arr,l,h):
    p=random.randint(l,h)
    arr[p],arr[l]=arr[l],arr[p]
    return partition(arr,l,h)


def quicksort(arr,l,h):
    if l<h:
        m=piv_find(arr,l,h)
        quicksort(arr,l,m-1)
        quicksort(arr,m+1,h) 
        
comlist=[]
timeList=[]
n=int(input("number of lists:"))
for j in range(n):
    arr=[]
    for i in range(0,j):
        ran=random.randint(1,1000)
        arr.append(ran)
    com=1
    start = timeit.default_timer()

    quicksort(arr,0,len(arr)-1)
    end = timeit.default_timer()
    total=end-start
	timeList.append(total)
    #print(arr)
    timeList.append(total*1000)
    comlist.append(com)
print("time list is ",timeList)
print("Average time taken to sort n lists using quick sort where pivot is random element is",sum(timeList)/len(timeList),"seconds")
#print(arr)


n1=[*range(1,n+1,1)]
actual=[]
actual1=[]
for x in n1:
    actual.append(x*x)
    actual1.append(x*math.log(x,2))
#print(nn,n1)
plt.plot(actual,n1,color='green', linewidth=3,label='n^2')
plt.plot(comlist,n1,color='black', linewidth=3,label='quicksort time')
plt.plot(actual1,n1,color='red', linewidth=3,label='nlogn')

plt.title('quick Sort Running time where pivot is random element')
plt.xlabel('value of time')
plt.ylabel('value of n')
plt.legend()
plt.show()