def mergesort(arr,left,right):
    i=0
    j=0
    k=0
    global arr1
    while(i<len(left) and j<len(right)):
        if(left[i]<=right[j]):
            arr1[k]=left[i]
            i+=1
            k+=1

        if (left[i]>right[j]):
            arr1[k]=right[j]
            j+=1
            k+=1
    while(i<len(left)):
        arr1[k]=left[i]
        i+=1
        k+=1
    while(j<len(right)):
        arr1[k]=right[j]
        j+=1
        k+=1

    


            
def merge(arr):

    while(len(arr)>1):
        mid=int(len(arr)/2)
        left=arr[:mid]
        right=arr[mid:]
        merge(left)
        merge(right)
        mergesort(arr,left,right)


arr=list(map(int,input().split()))
arr1=[0]*len(arr)
n=len(arr)
merge(arr)
print(arr1)
