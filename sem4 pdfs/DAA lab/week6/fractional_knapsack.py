def knapsack(obj,value,weight,capacity):
    pw=[0.0]*len(obj)
    for i in range(len(obj)):
        pw[i]=value[i]/weight[i]
        # if weight[i]>capacity:
        #     pw[i]=0.0
    max_value=0
    c1=capacity
    while(capacity>0):
        m=pw.index(max(pw))
        if capacity>weight[m]:
            max_value+=value[m]
            capacity-=weight[m]
            items_taken.append(obj[m])
            weights_taken.append(weight[m])
            pw[m]=0.0
        else:
            max_value+=(capacity*value[m])/weight[m]
            weights_taken.append(capacity)
            capacity-=capacity
            items_taken.append(obj[m])
            pw[m]=0.0
    return max_value

items_taken=[]
weights_taken=[]
obj=list(map(str,input('list of items : ').split()))
value=list(map(int,input('Corresponding values : ').split()))
weight=list(map(int,input('Corresponding weights : ').split()))
capacity=int(input('capacity : '))
max_value=knapsack(obj,value,weight,capacity)
print("maximum profit obtained with given capacity from given list of items with corresponding profits and weights is",max_value)
print("items taken :",items_taken)
print("weights are :",weights_taken)

'''
A B C D E F G H
10 5 15 7 6 18 3 45
2 3 5 7 1 4 1 16
15
'''