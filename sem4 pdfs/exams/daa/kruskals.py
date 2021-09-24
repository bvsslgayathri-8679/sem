sets=[]
edges={}
e=int(input())
result=[]
for i in range(e):
    li=list(map(int,input().split()))
    edges[(li[0],li[1])]=li[2]
    sets.append([i])

edges=dict(sorted(edges.items(),key=lambda item:item[1]))

def find_set(x):
    for i in range(len(sets)):
        if x in sets[i]:
            return i

for u,v in edges.keys():
    x=find_set(u)
    y=find_set(v)
    if(x!=y):
        result.append((u,v))
        sets[x]+=sets[y]
        sets.pop(y)

for i in result:
    print(i,edges[i])


'''
9
1 0 5
1 4 4
4 3 2
3 2 3
2 5 8
5 0 7
0 2 3
1 3 2
1 2 6

'''