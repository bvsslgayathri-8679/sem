def fcfs(arr,head):
    previous=head
    num=0
    print("Seek sequence is")
    for i in range(len(arr)):
    
        if(arr[i]>previous):
            num+=arr[i]-previous
        else:
            num+=previous-arr[i]
        print(arr[i])
        previous=arr[i]
        
    return num
        
   
def scan(arr,head,dir):
    previous=head
    left=[]
    right=[]
    for i in range(len(arr)):
        if arr[i]>head:
            right.append(arr[i])
        elif arr[i]<head:
            left.append(arr[i])
    left.sort()
    right.sort()
    num=2
    sum=0
    if dir=="left":
        j=len(left)-1
        while(j>=0):
            print(left[j])
            j-=1
        j=0
        while(j<len(right)):
            print(right[j])
            j+=1
        
        return (head-0)+(right[len(right)-1]-0)
    elif dir=="right":
        j=0
        while(j<len(right)):
            print(right[j])
            j+=1
        j=len(left)-1
        while(j>=0):
            print(left[j])
            j-=1
        
        
        return (199-head)+(199-left[0])
def cscan(arr,head,dir):
    left=[]
    right=[]
    for i in range(len(arr)):
        if arr[i]>head:
            right.append(arr[i])
        elif arr[i]<head:
            left.append(arr[i])
    left.sort()
    right.sort()

    if dir=="left":
        j=len(left)-1
        while(j>=0):
            print(left[j])
            j-=1
        j=len(right)-1
        while(j>=0):
            print(right[j])
            j-=1
        num=right[0]
        return (head-0)+(199-0)+(199-num)
    else:
        j=0
        while(j<len(right)):
            print(right[j])
            j+=1
        j=0
        while(j<len(left)):
            print(left[j])
            j+=1
        
        num=left[0]
        return (199-head)+(199-0)+(num-0)
    


arr=list(map(int,input().split()))
head=int(input("enter read/write head "))
choice=int(input("enter your choice :"))
if choice==1:
    print("total number of track movements is ",fcfs(arr,head))

elif choice==2:
    dir=input("direction")
    print("total number of track movements is ",scan(arr,head,dir))

elif choice==3:
    dir=input("direction ")
    print("total number of track movements is ",cscan(arr,head,dir))
'''
82 170 43 140 24 16 190 
'''