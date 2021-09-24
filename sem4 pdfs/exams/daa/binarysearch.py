def binarysearch(arr,sk):
    global i,j
    i=0
    j=len(arr)-1 
    
    while i<=j:
        m=int((i+j)/2)
        if arr[m]==sk:
            print("found ",m)
            break
        elif arr[m]>sk:
            j=m-1
        elif arr[m]<sk:
            i=m+1
        
    if i>j:
        print("not found")

a=int(input())
arr=list(map(int,input().split()))
sk=int(input())
i=0
j=len(arr)-1
binarysearch(arr,sk)
