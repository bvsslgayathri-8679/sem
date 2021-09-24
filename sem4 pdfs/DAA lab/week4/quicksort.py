import math
import random
import matplotlib.pyplot as plt

def partition(a,s,e):
    pivot=a[e]
    left=s
    right=e-1
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
    a[e],a[left]=a[left],a[e]
    return right



def quicksort(arr,l,h):
    if l<h:
        m=partition(arr,l,h)
        quicksort(arr,0,m-1)
        quicksort(arr,m+1,h)


comList = []
for i in range(200):
  a =[]
  com =1
  for j in range(0,i):
    n = random.randint(1,100)
    a.append(n)
  quicksort(a,0,len(a)-1)
  comList.append(com)
print(comList)

actual=[*range(1,201)]
actual1=[]
print(actual)
for i in actual:
    actual1.append(i*math.log(i,2))
print(actual1[10],actual1)
print(3*math.log(3,2))
plt.plot(comList,actual,color='green', linewidth=3,label='Mergesort time')
plt.plot(actual1,actual,color='red', linewidth=3,label='nlog n time')
plt.title('quick sort')
plt.xlabel('time')
plt.ylabel('n')
plt.legend()
plt.show()