allocated=int(input("No of blocks that are already allocated "))
print("enter the blocks that are already allocated ")
alloc=[int(input()) for i in range(allocated)]
ch=1
files=[0]*100
for i in alloc:
    if files[i]!=1:
        files[i]=1
while(ch==1):
    print("enter index starting block and length ")
    s=int(input())
    l=int(input())
    count=0
    i=s
    while count!=l and i<len(files):
        if files[i]==0:
            files[i]=1
            print(i,"-->",files[i])
            i+=1
            count+=1
            
        elif files[i]==1:
            i+=1
            continue
        
        
        if i>=len(files):
            print("memory is full ")
    print("do you want to continue i.e allocate more files yes-1 no-0 ")
    ch=int(input())

