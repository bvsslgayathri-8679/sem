import random
def partition(arr,l,h):
    p=l
    i=l
    j=h
    while i<j:
        while arr[i]<=arr[p] and i<h:
            i+=1
        while arr[j]>arr[p]:
            j-=1
        if i<j:
            arr[i],arr[j]=arr[j],arr[i]

    arr[j],arr[p]=arr[p],arr[j]
    return j

def find_pivot(arr,l,h):
    r=random.randint(l,h)
    arr[l],arr[r]=arr[r],arr[l]
    return partition(arr,l,h)


def quicksort(arr,l,h):
    if l<h:
        m=find_pivot(arr,l,h)
        quicksort(arr,l,m-1)
        quicksort(arr,m+1,h)



n=int(input())
arr=list(map(int,input().split()))
quicksort(arr,0,n-1)
print(arr)