files=[]
ch=5
while ch!=0:

    if ch==5:
        root_dir=input("enter root directory: ")
    elif ch==0:
        exit(0)
    elif ch==1:
        file=input("enter file name ")
        files.append(file)

    elif ch==2:
        delfile=input("enter the filename to be deleted: ")
        files.remove(delfile)

    elif ch==3:
        print((len(files)//2)*"  "+root_dir+"  \n")
        for i in range(len(files)):
            print(files[i],end=" ")

    elif ch==4:
        yn=input("enter the file name to be searched: ")
        flag=1
        for i in range(len(files)):
            if files[i]==yn:
                print(" search file"+files[i]+" found ")
                flag=0
                continue
        if flag==1:
            print("search element not found")

    else:
        print("enter proper choice")

    print("enter your choice of operation:\n1.create file\n2.deleting a file\n3.displaying a file\n 4.searching a file \n0.exit\n")
    ch=int(input())
    