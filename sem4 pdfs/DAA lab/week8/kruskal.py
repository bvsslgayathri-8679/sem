


def addEdge(u, v, w):
    global graph
    graph.append([u, v, w])



def find(parent,u):
    if parent[u] == u:
        return u
    return find(parent, parent[u])

def union(parent, rank, x, y):
    xroot = find(parent, x)
    
    yroot = find(parent, y)
 
    if rank[xroot] < rank[yroot]:
        parent[xroot] = yroot
    elif rank[xroot] > rank[yroot]:
        parent[yroot] = xroot
 
    else:
        parent[yroot] = xroot
        rank[xroot] += 1

def kruskals():
 
    result = [] 
    i = 0
        
    e = 0
    global graph
    graph = sorted(graph,key=lambda item: item[2])
    parent = []
    rank = []
 
        # Create V subsets with single elements
    for node in range(vertices):
        parent.append(node)
        rank.append(0)
 
    while e < vertices - 1:
        u, v, w = graph[i]
        i = i + 1
        x = find(parent, u)
        y =find(parent, v)
 
        if x != y:
            e = e + 1
            result.append([u, v, w])
            union(parent, rank, x, y)
 
    minimumCost = 0
    print ("Edges in the constructed MST")
    for u, v, weight in result:
        minimumCost += weight
        print("%d ~ %d --> %d" % (u, v, weight))
    print("Minimum Spanning Tree" , minimumCost)



graph=[]
vertices=4
addEdge(0, 1, 10)
addEdge(0, 2, 6)
addEdge(0, 3, 5)
addEdge(1, 3, 15)
addEdge(2, 3, 4)

kruskals()