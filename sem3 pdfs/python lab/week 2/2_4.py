def my_func(x,n="User"): #defining a function with default arguments 
    print(x,n)

a,b=map(str,input().split())
my_func(a,b)  #calling function with 2 arguments
my_func(a)   # calling function with only 1 argument