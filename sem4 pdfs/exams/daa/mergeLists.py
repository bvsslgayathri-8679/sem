

def mergesort(left,right):
    arr=[0]*(len(left)+len(right))
    i=0
    j=0
    k=0
    while(i<len(left) and j<len(right)):
        if(left[i]<=right[j]):
            arr[k]=left[i]
            i+=1
            k+=1
        else:
            arr[k]=right[j]
            k+=1
            j+=1
    while i<len(left):
        arr[k]=left[i]
        i+=1
        k+=1
    while j<len(right):
        arr[k]=right[j]
        k+=1
        j+=1
    return arr

left=list(map(int,input().split()))
right=list(map(int,input().split()))
print(mergesort(left,right))