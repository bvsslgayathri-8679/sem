import math
import random
import time
import matplotlib.pyplot as plt

def mergesort(arr,left,right):
    i=0
    j=0
    k=0
    global com
    while i<len(left) and j<len(right):
        com+=1
        if left[i]<=right[j]:
            arr[k]=left[i]
            k+=1
            i+=1
            
        else:
            arr[k]=right[j]
            k+=1
            j+=1
            
    while(i<len(left)):
        arr[k]=left[i]
        k+=1
        i+=1
    
    while(j<len(right)):
        arr[k]=right[j]
        k+=1
        j+=1


def merge(arr):
    if len(arr)>1:
        mid=math.ceil(len(arr)//2)
        left=arr[:mid]
        right=arr[mid:]
        merge(left)
        merge(right)
        mergesort(arr,left,right)

complist=[]
timeList=[]
n=int(input("number of lists: "))
for i in range(1,n+1):
    arr1=[]
    for j in range(i):
        arr1.append(random.randint(1,100))
    
    com=1
    start = time.time()
    merge(arr1)
    total=time.time()-start
    timeList.append(total)
    complist.append(com)
print("time list is ",timeList)
print("Average time taken to sort n lists using merge sort",sum(timeList)/len(timeList))


actual=[*range(1,n+1)]
actual1=[]
for i in actual:
    actual1.append(i*math.log(i,2))

plt.plot(complist,actual,color='red', linewidth=2,label='Mergesort time')
plt.plot(actual1,actual,color='black', linewidth=2,label='nlog n time')
plt.title('merge sort')
plt.xlabel('time')
plt.ylabel('n')
plt.legend()
plt.show()