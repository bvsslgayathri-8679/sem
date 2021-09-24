file=[0]*100
ch=1
while ch==1:
    print("Enter starting block and length of file ")
    s=int(input())
    l=int(input())
    flag=1
    for i in range(s,s+l+1):
        if file[i]==0:
            file[i]=1
            

        elif file[i]==1:
            flag=0
            break
    if flag==0:
        print("file is not allocated ")
    else:
        print("file is allocated successfully")
    

            
    print("do you want to continue i.e add another file y-1 n-0")
    ch=int(input("choice "))