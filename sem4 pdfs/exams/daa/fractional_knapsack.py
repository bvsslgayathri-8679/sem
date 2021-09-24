


def fractional_knapsack():
    global p,w,capacity,max_profit
    pw=[0.0]*len(p)

    for i in range(len(p)):
        pw[i]=p[i]/w[i]

    for i in range(len(w)):
        r=pw.index(max(pw))

        if(capacity>=w[r]):
            capacity-=w[r]
            items.append(r+1)
            weights.append(w[r])
            max_profit+=p[r]
        
        elif capacity>0:
            
            items.append(r)
            weights.append(capacity)
            max_profit+=capacity*pw[r]
            capacity=0
            return max_profit
        pw[r]=0.0




items=[]
max_profit=0
weights=[]
capacity=int(input())
p=list(map(int,input().split()))
w=list(map(int,input().split()))
print(fractional_knapsack())
