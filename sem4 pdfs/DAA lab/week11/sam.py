import sys

p = [5,4,6,2,7]
n = len(p)

m = [[0 for x in range(n)] for x in range(n)]
s = [[0 for x in range(n)] for x in range(n)]
for i in range(1,n):
    m[i][i] = 0
    s[i][i] = i
for l in range(2,n):
    for i in range(1,n-l+1):
        j = i+l-1
        m[i][j] = sys.maxsize
        for k in range(i,j):
            c = m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j]
            if c < m[i][j]:
                m[i][j] = c
                s[i][j] = k

print("\nGiven four matrices 1(5x4) , 2(4x6) , 3(6x2) , 4(2x7)")
print("\nMinimum no.of multiplications is : ",m[1][n-1])
print("\nOrder of multiplication is : ")
print(s)
def printorder(i,j,s):
    if i == j:
        print(s[i][j],end=" ")
    else:
        print("(",end=" ")
        printorder(i,s[i][j],s)
        printorder(s[i][j]+1,j,s)
        print(")",end=" ")

printorder(1,4,s)
print("\n")