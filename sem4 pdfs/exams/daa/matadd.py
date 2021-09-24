m = int(input("Enter rows: "))
n = int(input("Enter columns: "))
print("Enter array 1: ")
arr1 = [list(map(int, input().split())) for i in range(m)]
print("Enter array 2: ")
arr2 = [list(map(int, input().split())) for i in range(m)]

for i in range(m):
    for j in range(n):
        print(arr1[i][j]+arr2[i][j], end=" ")
    print("")

