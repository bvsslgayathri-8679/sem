import random
import math
import random
import math
import matplotlib.pyplot as plt


def mergesort(arr,l,mid,h,p):
    i=l
    j=mid+1
    k=0
    global arr11
    global com
    while i<=mid and j<=h:
        if arr[i]<=arr[j]:
            arr1[k]=arr[i]
            k+=1
            i+=1
            com+=1
        else:
            arr1[k]=arr[j]
            k+=1
            j+=1
            com+=1
    if j>h:
        while(i<=mid):
            arr1[k]=arr[i]
            k+=1
            i+=1
    else:
        while(j<=h):
            arr1[k]=arr[j]
            k+=1
            j+=1


def merge(arr,l,h,n):
    if l<h:
        mid=math.ceil(l+h)//2
        merge(arr,0,mid,n)
        merge(arr,mid+1,h,n)
        mergesort(arr,l,mid,h,n)


complist=[]
n=int(input())
global z
for i in range(5,n+1):
    arr1=[]
    z=i
    for j in range(i):
        arr1.append(random.randint(1,100))
    
    com=1
    merge(arr1,0,i-1,i)
    complist.append(com)

print(complist)

#timeList = [x * 1000 for x in timeList]
nn = [*range(1, n, 1)]
#nn=[x*(math.log(x,2)) for x in n]
nnn=[]
for x in nn:
		nnn.append(x*math.log(x,2))

#print(nn)
#print(comList)
#comList=[(math.log(x,2)) for x in comList]
#print(comList)

plt.plot(complist,n,color='green', linewidth=3,label='Mergesort time')
plt.plot(nnn,n,color='red', linewidth=3,label='nlogn')
plt.title('Merge Sort Running ime')
plt.xlabel('value of time')
plt.ylabel('value of n')
plt.legend()
plt.show()	
