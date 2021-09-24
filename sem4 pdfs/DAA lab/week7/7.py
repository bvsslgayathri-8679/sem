#Dijkstra Algorithm.
def mindistance(distance,visited):
    min=99999
        
    for i in range(vertices):
        if distance[i]<min and visited[i]==False:
            min=distance[i]
            min_vertex=i
    return min_vertex

def printsolution(distance):
    global vertices
    for i in range(vertices):
        print(i,distance[i])

def dijkstra(src):
    global vertices,graph
    distance=[99999]*vertices
    distance[src]=0
    visited=[False]*vertices
    for i in range(vertices):
        u=mindistance(distance,visited)
        
        visited[u]=True

        for j in range(vertices):
            if graph[u][j]>0 and visited[j]==False and distance[j]>distance[u]+graph[u][j]:
                distance[j]=distance[u]+graph[u][j]
    printsolution(distance)

vertices=int(input('vertices'))
graph=[[0, 4, 0, 0, 0, 0, 0, 8, 0], [4, 0, 8, 0, 0, 0, 0, 11, 0], 
    [0, 8, 0, 7, 0, 4, 0, 0, 2], [0, 0, 7, 0, 9, 14, 0, 0, 0], 
    [0, 0, 0, 9, 0, 10, 0, 0, 0], [0, 0, 4, 14, 10, 0, 2, 0, 0], 
    [0, 0, 0, 0, 0, 2, 0, 1, 6], [8, 11, 0, 0, 0, 0, 1, 0, 7], 
    [0, 0, 2, 0, 0, 0, 6, 7, 0]]

# graph = [list(map(int,input().split())) for j in range(vertices)]

dijkstra(0)


'''
9
0 4 0 0 0 0 0 8 0
4 0 8 0 0 0 0 11 0
0 8 0 7 0 4 0 0 2
0 0 7 0 9 14 0 0 0
0 0 0 9 0 10 0 0 0
0 0 4 14 10 0 2 0 0
0 0 0 0 0 2 0 1 6
8 11 0 0 0 0 1 0 7
0 0 2 0 0 0 6 7 0

'''