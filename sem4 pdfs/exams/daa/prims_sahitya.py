

n = int(input("Enter no. of nodes: "))
mat = []
for i in range(n):
    mat+=[list(map(int, input().split()))]
      
weight = [99999]*n
visited = [False]*n
parent = [-1]*n
wei_cpy = [99999]*n

#let source node = 0 by default
weight[0] = wei_cpy[0] = 0
pre_min = -1

for i in range(n):
    min_ind = wei_cpy.index(min(wei_cpy))
    visited[min_ind] = True
    flg = 1
    for j in range(n):
        if mat[min_ind][j]!=0 and visited[j]!=True and mat[min_ind][j]<weight[j]:
            weight[j] = min(mat[min_ind][j], weight[j])
            wei_cpy[j] = weight[j]
            flg = 0
            
    parent[min_ind] = pre_min
    wei_cpy[min_ind] = 99999
    if flg==0:
        pre_min = min_ind
        

for i in range(1,n):
    print(parent[i],"<->", i, "weight = ", mat[parent[i]][i])

print("Minimum Spanning Tree cost :" , sum(weight))
# 0 4 6 0 0 0
# 4 0 6 3 4 0
# 6 6 0 1 8 0
# 0 3 1 0 2 3
# 0 4 8 2 0 7
# 0 0 0 3 7 0 
