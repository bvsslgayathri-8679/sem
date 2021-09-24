""" n,m=int(input()),int(input())
arr1=[]
arr2=[]
for i in range(n):
    arr1.append([int(i) for i in input().split()])
for j in range(n):
    arr2.append([int(i) for i in input().split()])

res=[]
res=arr1 @arr2

for i in range(len(res)):
    print(res[i])


# def add(arr1,n,m,arr2)
 """


import numpy as np
m1 = np.array([[1,4,7],[2,5,8]])
m2 = np.array([[1,4,8],[2,3,6]])
print('array 1\n',m1)
print('array 2\n',m2)
print('\nMultiplication\n',np.multiply(m1,m2))
print('\n addition\n',np.add(m1,m2))
print('\ntranspose\n',m1.transpose())