p=list(input('processors ').split())
p1=p.copy()
A=list(map(int,input('a available ').split()))
B=list(map(int,input('b available ').split()))
C=list(map(int,input('c available ').split()))
A_max=list(map(int,input('a max ').split()))
B_max=list(map(int,input('b max ').split()))
C_max=list(map(int,input('c max ').split()))
A_tot=int(input('a total '))
B_tot=int(input('b total '))
C_tot=int(input('c total '))
Aavail=A_tot-sum(A)
Bavail=B_tot-sum(B)
Cavail=C_tot-sum(C)
A_need=[0]*len(p)
B_need=[0]*len(p)
C_need=[0]*len(p)
for i in range(len(p)):
    A_need[i]=A_max[i]-A[i]
    B_need[i]=B_max[i]-B[i]
    C_need[i]=C_max[i]-C[i]

i=c=0
seq=[]
while c!=len(p):
    if A_need[i]<=Aavail and B_need[i]<=Bavail and C_need[i]<=Cavail and p[i]!='x':
        seq.append(p[i])
        p[i]='x'
        c+=1
        Aavail=Aavail+A[i]
        Bavail=Bavail+B[i]
        Cavail=Cavail+C[i]

    
    
    if i<len(p)-1:
        i+=1
    else:
        i=0

print('need array is ')
for i in range(len(p)):
    print(p1[i],":",A_need[i],B_need[i],C_need[i])
print("Safe sequence of execution is")
print(seq)    

'''
p1 p2 p3 p4 p5
0 2 3 2 0
1 0 0 1 0
0 0 2 1 2
7 3 9 4 5
5 2 0 2 3
3 2 2 2 3
10
5
7
'''