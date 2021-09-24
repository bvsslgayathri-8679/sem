m1 = int(input("Enter rows of arr1: "))
n1 = int(input("Enter columns of arr1: "))
m2 = int(input("Enter rows of arr2: "))
n2 = int(input("Enter columns of arr2: "))

if(n1!=m2):
    print("multiplication not possible")

else:
    print("Enter array 1: ")
    arr1 = [list(map(int, input().split())) for i in range(m1)]
    print("Enter array 2: ")
    arr2 = [list(map(int, input().split())) for i in range(m2)]

    mul = [[0 for i in range(m1)] for j in range(n2)]
    for i in range(m1):
        for j in range(n2):
            for k in range(n1):
                mul[i][j] = mul[i][j]+ arr1[i][k]*arr2[k][j]
    
    for i in range(m1):
        for j in range(n2):
            print(mul[i][j], end=" ")
        print("")


