vertices=int(input())
graph=[list(map(int,input().split())) for i in range(vertices)]
for i in range(vertices):
    for j in range(vertices):
        for k in range(vertices):
            graph[j][k]=min(graph[j][k],graph[j][i]+graph[i][k])


for i in range(vertices):
    print(*graph[i])


'''
4
0 3 99999 7
3 0 2 99999
5 99999 0 1
2 99999 99999 0
'''