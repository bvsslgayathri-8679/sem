n=int(input())
d=dict(map(int,input().split()) for i in range(n))
print(sum([d[i] for i in d]))