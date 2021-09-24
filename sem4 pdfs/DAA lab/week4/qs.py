import random
import timeit
import matplotlib.pyplot as plt
import math

def partition(a,l,h):
    i=l+1
    j=h
    p=a[l]
    global com
    while(1):
        while a[i]<=p and i<j:
            i += 1
            com+=1
        while a[j]>=p and i<=j:
            j -= 1
            com+=1
        if i<j:
            a[i],a[j]=a[j],a[i]
            com+=1
        else:
            com+=1
            break
    a[l],a[j]=a[j],a[l]
    return j

def quicksort(a,l,h):
    if l<h:
        k=partition(a,l,h)
        quicksort(a,l,k-1)
        quicksort(a,k+1,h)

timeList=[]
comList=[]

for p in range(200):
	com=1 
	c = []
	for i in range(0,p):
		n = random.randint(1,100)
		c.append(n)
	
	start = timeit.default_timer()
	quicksort(c,0,p-1)
	end = timeit.default_timer()
	total=end-start
	timeList.append(total)
	comList.append(com)
	print(c)
timeList = [x * 1000 for x in timeList]
avgtime=0
for i in timeList:
	avgtime+=i
avgtime/=200
n = [*range(1, 201, 1)]
nn=[]
for x in n:
		nn.append(x*math.log(x,2))
nnn=[]
for x in n:
		nnn.append(x*x)
print("Time required = ",avgtime)

plt.plot(comList,n,color='green', linewidth=3,label='Quicksort time')
plt.plot(nn,n,color='red', linewidth=3,label='nlogn')
plt.plot(nnn,n,color='black', linewidth=3,label='n^2')
plt.title('Quick Sort Running ime')
plt.xlabel('value of time')
plt.ylabel('value of n')
plt.legend()
plt.show()




import random
import timeit
import matplotlib.pyplot as plt
import math

def merge(c,a,b):
    i=j=k=0
    global com
    while i<len(a) and j<len(b):
        if a[i]<b[j]:
          c[k]=a[i]
          i += 1
          com+=1
        else:
          c[k]=b[j]
          j += 1
          com+=1
        k += 1
    while i < len(a):
      c[k]=a[i]
      i += 1
      k += 1
    while j < len(b):
      c[k]=b[j]
      j += 1
      k += 1

def mergeSort(c):
	if len(c)>1:
		mid=int(len(c)/2)
		a=c[:mid] 
		b=c[mid:]
		mergeSort(a)
		mergeSort(b)
		merge(c,a,b)
	
timeList=[]
comList=[]

for p in range(200):
	com=1 
	c = []
	for i in range(0,p):
		n = random.randint(1,100)
		c.append(n)
	
	start = timeit.default_timer()
	mergeSort(c)
	end = timeit.default_timer()
	total=end-start
	timeList.append(total)
	comList.append(com)
	
timeList = [x * 1000 for x in timeList]
avgtime=0
for i in timeList:
	avgtime+=i
avgtime/=200
n = [*range(1, 201, 1)]
nn=[]
for x in n:
		nn.append(x*math.log(x,2))
print("Time required = ",avgtime)

plt.plot(comList,n,color='green', linewidth=3,label='Mergesort time')
plt.plot(nn,n,color='red', linewidth=3,label='nlogn')
plt.title('Merge Sort Running time')
plt.xlabel('value of time')
plt.ylabel('value of n')
plt.legend()
plt.show()

