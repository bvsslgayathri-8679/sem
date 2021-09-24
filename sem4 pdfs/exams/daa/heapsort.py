def heapify(arr,n,i):
    left=i*2+1
    right=i*2+2
    max=i
    if left<n and arr[left]>arr[max]:
        max=left
    elif right<n and arr[right]>arr[max]:
        max=right
    if max!=i:
        arr[i],arr[max]=arr[max],arr[i]
        heapify(arr,n,max)

def heap(arr):
    n=len(arr)
    for i in range(n//2-1,-1,-1):
        heapify(arr,n,i)

    for i in range(n-1,0,-1):
        arr[0],arr[i]=arr[i],arr[0]
        heapify(arr,i,0)
        
arr=list(map(int,input().split()))
heap(arr)
print(arr)