def func(a,b="user"):
    print(a+b)

a,b=input().split(',')
func(a)
func(a,b)