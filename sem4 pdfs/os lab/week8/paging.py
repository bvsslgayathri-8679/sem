mem=int(input("enter memory size"))
page_Size=int(input("Enter the page size"))
num_pages=int(input("no. of pages available in memory are"))
p=int(input("Enter number of processes "))
pt=[]
np=[]
p_sum=0
sum1=0
for i in range(p):
    print("enter num of pages req for p",i)
    np.append(int(input()))
    sum1+=np[i]
    if sum1<num_pages:
        pt.append(list(map(int,input().split())))
        p_sum+=np[i]



    else:
        print("memory is full")



print("\nEnter Logical Address to find Physical Address")

pno=int(input("process no."))
pagenum=int(input("page num "))
offset=int(input("offset "))


if(pno<p_sum and pagenum<np[i] and offset<page_Size):
    print("physical address memory is ",pt[pno-1][pagenum]*page_Size+offset)

'''
1000
100
10
3
4
8 6 9 5
5
1 4 5 7 3
5
3 
60

'''