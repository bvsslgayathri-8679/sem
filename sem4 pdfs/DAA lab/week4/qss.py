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

# import random as r
# import math
# import matplotlib.pyplot as plt
# com = 0
# def quick_sort(a,l,h):
#     if l < h:
#         p = partition(a,l,h)
#         quick_sort(a,l,p-1)
#         quick_sort(a,p+1,h)
# def partition(a,l,h):
#     pivot_index = l
#     pivot = a[pivot_index]
#     while l < h:
#         global com
#         while l < len(a) and a[l] <= pivot:
#             com += 1
#             l+=1
#         while a[h] > pivot:
#             com+=1
#             h-=1
        
#         if l < h:
            
#             a[l],a[h]=a[h],a[l]
#             com+=1
#     a[pivot_index],a[h]=a[h],a[pivot_index]
#     return h
# a = []
# comList = []
# for i in range(200):
#   a =[]
#   com =1
#   for j in range(0,i):
#     n = r.randint(1,100)
#     a.append(n)
#   quick_sort(a,0,len(a)-1)
#   comList.append(com)
# # print(comList)
# n = [*range(1, 201, 1)]
# nn=[]
# for x in n:
# 		nn.append(x*math.log(x,2))
# plt.plot(comList,n,color='green', linewidth=3,label='Quicksort time')
# plt.plot(nn,n,color='red', linewidth=3,label='nlogn')
# plt.title('Quick Sort Running ime')
# plt.xlabel('value of time')
# plt.ylabel('value of n')
# plt.legend()
# plt.show()