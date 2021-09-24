a,b,c=map(int,input().split())
#take 3 user inputs and print greatest among the three 
print(a ,"is the greatest number among ",a,b,c) if a>b and a>c else print(b,"is the greatest number among ",a,b,c) if b>c and b>a else print(c,"is the greatest number among ",a,b,c)