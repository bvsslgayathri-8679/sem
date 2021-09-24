def take_input(n):
    print('enter the items in new line ')
    ex=[list(int(x) for x in input().split()) for i in range(n)]  #inputing the values
    l=[int(i) for item in ex for i in item]    #making them into list
    return l
def round_robin(a,b):
    l= [i for val in zip(a,b) for i in  val]           #zip will make a tuple (a,b)
    if(len(a)<len(b)):
        item=[l2[i] for i in range(len(l1),len(l2))]   #inserting the remaining elements.
    elif (len(a)>len(b)):
        item=[l1[i] for i in range(len(l2),len(l1))]
    l.extend(item)
    return l
n1,n2=map(int , input('enter the number of elemenst in first and second list : ').split())
l1=take_input(n1)       #calling the take_input function 
l2=take_input(n2)

print('The Round Robin is : ',round_robin(l1,l2))