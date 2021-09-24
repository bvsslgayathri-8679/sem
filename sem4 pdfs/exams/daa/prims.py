def prims():
    global min_weight,vertices

    visited=[False]*vertices
    visited[0]=True
    num_edges=0
    while(num_edges<vertices-1):
        min=99999
        x=0
        y=0
        for i in range(vertices):
            if visited[i]:
                for j in range(vertices):
                    if graph[i][j]!=0 and min>graph[i][j] and visited[j]==False:
                        min=graph[i][j]
                        x=i
                        y=j

        print(x,'--',y,'-->',graph[x][y])
        min_weight+=graph[i][j]
        visited[y]=True
        num_edges+=1
    



min_weight=0
vertices=int(input())
graph=[list(map(int,input().split())) for i in range(vertices)]
prims()

'''
5
0 2 0 6 0
2 0 3 8 5
0 3 0 0 7
6 8 0 0 9
0 5 7 9 0

'''