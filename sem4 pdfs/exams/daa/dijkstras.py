v=int(input())
visited=[False]*v
distance=[99999]*v
distance[0]=0

graph=[list(map(int,input().split())) for i in range(v)]
for i in range(v):
    min=99999
    # min_vertex=i
    for j in range(v):
        if visited[j]==False and distance[j]<min:
            min_vertex=j
            min=distance[j]

    visited[min_vertex]=True
    for j in range(v):
        if visited[j]==False and distance[j]>distance[min_vertex]+graph[min_vertex][j] and graph[i][j]!=0:
            distance[j]=distance[min_vertex]+graph[min_vertex][j]

for i in range(v):
    print(0,'->',i,'=',distance[i])

'''
6
0 1 4 0 0 0
1 0 4 2 7 0
4 4 0 3 5 0
0 2 3 0 4 6
0 7 5 4 0 7
0 0 0 6 7 0
'''