
def mergesort(arr,left,right):
    i=0
    j=0
    k=0
    arr=[0]*(len(left)+len(right))
    while i<len(left) and j<len(right):
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
    return arr

arr=[]
left=list(map(int,input("Input 1st sorted list").split()))
right=list(map(int,input("Input 1st sorted list").split()))
arr=mergesort(arr,left,right)
print("Sorted list :",arr)
