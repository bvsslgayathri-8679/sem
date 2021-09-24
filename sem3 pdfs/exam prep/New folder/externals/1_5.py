def prime(n):
    for i in range(2,n//2):
        if n%i==0:
            return 0
        else:
            return 1

for i in range(20,51):
    if prime(i):
        print(i)
