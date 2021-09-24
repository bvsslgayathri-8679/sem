import random
import math
import matplotlib.pyplot as plt



def partition(arr,l,h):
    i=l+1
    j=h
    p=arr[l]
    global com
    while True:
        while i<=j and arr[i]<=p:
            i+=1
            com+=1
        while i<=j and arr[j]>=p:
            j-=1
            com+=1
        if i>j:
             break
        else:
            arr[i],arr[j]=arr[j],arr[i]
    arr[j],arr[l]=arr[l],arr[j]
    return j




def quicksort(arr,l,h):
    if l<h:
        p=partition(arr,l,h)
        quicksort(arr,l,p-1)
        quicksort(arr,p+1,h)





comlist=[]

for i in range(200):
    com=1
    arr=[]
    for j in range(i):
        arr.append(random.randint(1,100))
    quicksort(arr,0,len(arr)-1)
    comlist.append(com)
    print(arr)
print(comlist)


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
