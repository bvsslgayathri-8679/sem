
def mul(mat,split,arr_d):
    l=len(mat)
    for i in range(1,l):
        split[i][i]=i
    for d in range(1,l-1):
        for i in range(1,l-d):
            j=i+d
            min=99999
            for k in range(i,j):
                value=mat[i][k]+mat[k+1][j]+arr_d[i-1]*arr_d[k]*arr_d[j]

                if(value<min):
                    min=value
                    split[i][j]=k

            mat[i][j]=min
    return mat[1][l-1]
def ordermatrix(split,i,j):
    if i==j:
        print(chr(64+split[i][j]),end="")
    else:
        print("(",end="")
        ordermatrix(split,i,split[i][j])
        ordermatrix(split,split[i][j]+1,j)
        print(")",end="")

arr_d=list(map(int,input().split()))
n=len(arr_d)
for i in range(len(arr_d)-1):
    print(arr_d[i],'*',arr_d[i+1])

mat=[[0 for i in range(n)] for j in range(n)]
split=[[0 for i in range(n)] for j in range(n)]

print(mul(mat,split,arr_d))

ordermatrix(split,1,n-1)