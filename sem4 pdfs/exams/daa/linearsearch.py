def linearsearch(arr,sk):
    flag=0
    for i in arr:
        if sk==i:
            print("sk ",i," found")
            flag=1
    if flag==0:
        print("sk ",sk," not found")



a=int(input())
arr=list(map(int,input().split()))
sk=int(input())
linearsearch(arr,sk)