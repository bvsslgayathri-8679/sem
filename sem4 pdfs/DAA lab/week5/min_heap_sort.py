def heapify(array1,n,i):
    min=i
    left=2*i+1
    right=2*i+2
    if left<n and array1[left]<array1[min]:
        min=left
    
    if right<n and array1[right]<array1[min]:
        min=right
    
    if min!=i:
        array1[i],array1[min]=array1[min],array1[i]
        heapify(array1,n,min)

def heap(array1):
    n=len(array1)
    for i in range(n//2-1,-1,-1): 
        heapify(array1,n,i)
    print("heap array ",array1)
    #heap sort
    for i in range(n-1,0,-1):
        array1[i],array1[0]=array1[0],array1[i]
        heapify(array1,i,0)

array1=list(map(int,input('enter tree elements ').split()))
print(array1)
heap(array1)
print("ascending sort of given array is ",array1)



#6 7 12 10 15 17 5    