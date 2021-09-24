files= [ [-1]*1 for _ in range(20) ]
direc=[]

ch=1


while ch!=0:
    if ch==1:
        root_dir=input("enter root directory: ")
    elif ch==2:
        dirname=input("enter directory ")
        direc.append(dirname)
        
    elif ch==3:
        filename=input("enter filename ")
        dch=input("enter the directory to put the file ")
        r=direc.index(dch)
        files[r].append(filename)
    elif ch==4:

        delf=input("enter the filename to delete ")
        deld=input("enter the directory")
        r=direc.index(deld)
        if delf in files[r]:
            files[r].remove(delf)
        else:
            print("no such file found")



    elif ch==5:
        print(root_dir)
        for i in range(len(direc)):
            print(direc[i],end="--")
            for j in range(len(files[i])):
                if files[i][j]!=-1:
                   print(files[i][j],end="")
            print("")    

    elif ch==6:
        delf=input("enter the filename to search ")
        deld=input("enter the directory")
        r=direc.index(deld)
        if delf in files[r]:
            print("search file found ")
        else:
            print("search file not found ")



    print("enter your choice of operation:\n2.create directory\n3.create file\n4.deleting a file\n5.displaying a file\n 6.searching a file \n0.exit\n")
    ch=int(input())