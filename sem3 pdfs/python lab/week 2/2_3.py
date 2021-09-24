# x=lambda n,m:n+m
# n=int(input())
# print('Sum of Value and square of the value(using lambda funtions) is ',x(n,n**2))

adder=lambda n,m:n+m
n,m=map(int,input().split())
print(adder(n,m) ,"is the adder of",n,"and",m,"using lambda funtions")

