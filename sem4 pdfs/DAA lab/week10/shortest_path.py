def shortest_path():
    global distance
    l=len(distance)
    for i in range(l):
        for j in range(l):
            for k in range(l):
                distance[j][k]=min(distance[j][k],distance[j][i]+distance[i][k])


def print_distance():
    for i in distance:
        print(*i)


n=int(input('Number of vertices in graph : '))
print('Adjacency matrix of given graph (replace infinity with 999999):')
graph=[list(map(int,input().split())) for i in range(n)]
distance=graph.copy()
shortest_path()
print('______________________\n\nShortest path adjacent matrix for given graph is:')
print_distance()
'''
4
0 3 999999 7
3 0 2 999999
5 999999 0 1
2 999999 999999 0
'''