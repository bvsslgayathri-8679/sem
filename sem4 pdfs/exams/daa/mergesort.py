def mergesort(arr,left,right):
    global arr1
    arr1=[0]*len(arr)
    i=0
    j=0
    k=0
    while(i<len(left) and j<len(right)):
        if(left[i]<=right[j]):
            arr1[k]=left[i]
            i+=1
            k+=1
        if(left[i]>right[j]):
            arr1[k]=right[j]
            k+=1
            j+=1
    while i<len(left):
        arr1[k]=left[i]
        i+=1
        k+=1
    while j<len(right):
        arr[k]=right[j]
        k+=1
        j+=1
    

def merge(arr):
    if(len(arr)>1):
        mid=int(len(arr)/2)
        left=arr[:mid]
        right=arr[mid:]
        merge(left)
        merge(right)
        mergesort(arr,left,right)
arr1=[]
arr=list(map(int,input().split()))
merge(arr)
print(arr1)