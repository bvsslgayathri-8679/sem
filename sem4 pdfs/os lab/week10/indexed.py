index=[0]*100
files=[0]*100
ch=1
file=[]
while(ch==1):
    ind=int(input("enter block num of index  "))
    if index[ind]==0:
        print("index is free \n enter number of blocks needed and files required ")
        blocks=int(input())
        file=list(map(int,input().split()))
        flag=1
        for i in file:
            if files[i]==0:
                files[i]=1
            else:
                flag=0
                
        if flag==0:
            print("cant allocate memory for index ",ind)

        else:
            print("file allocation for index ",ind ," is done")
            index[ind]=1
    else:
        print("index ",ind," is already allocated ")
    print("do you want to continue i.e allocate more files yes-1 no-0 ")
    ch=int(input())



            

