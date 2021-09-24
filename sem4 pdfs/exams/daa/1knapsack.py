
def knapsack():
    global capacity,num,w,p,k
    for i in range(1,num+1):
        for j in range(1,capacity+1):
            
            if w[i-1]<=j:
                k[i][j]=max(k[i-1][j],p[i-1]+k[i-1][j-w[i-1]])
            else:
                k[i][j]=k[i-1][j]
    return k[num][capacity]        

capacity=int(input())
contributors=[]
p=list(map(int,input().split()))
w=list(map(int,input().split()))
num=len(p)
k=[[0 for i in range(capacity+1)] for j in range(num+1)]
max_profit=knapsack()
print(max_profit)
j=len(k)

while(j>=0 and max_profit>0):
    if max_profit not in k[j-2]:
        contributors.append(k[j-2])
        print(j-1)
        max_profit-=p[j-2]
    j-=1

'''
15
10 5 15 7 6 18 3
2 3 5 7 1 4 1
'''


