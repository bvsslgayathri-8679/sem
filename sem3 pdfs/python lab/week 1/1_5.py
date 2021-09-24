def prime(n):
    for i in range(2,n//2):
        if n%i==0:
            return 0
    return 1


# printing all prime numbers in range 10 to 51 
for i in range(10,51):
    if prime(i)==1:
        print(i)