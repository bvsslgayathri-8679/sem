import random
n=int(input("enter no of philosophers"))
p=[]
print()
forks=[1]*n

def wait(i):
    i-=1
    return i

def signal(i):
    i+=1
    return i
def test(p):
    global forks,n
    
    if(forks[p]==1 and forks[(p-1)%n]==1):
        forks[p]=wait(forks[p])
        forks[(p-1)%n]=wait(forks[(p-1)%n])


def take_fork(p):
    test(p)

def put_forks(p):
    print("philosopher " , p ," has finished eating")

def eat(p):
    print("philosopher ",p," is eating ")

def philosopher(p):
    global forks,n
    forks[p]=wait(forks[p])
    forks[(p-1)%n]=wait(forks[(p-1)%n])
    print("forks ",p,(p-1)%n," are taken by philosopher ",p)
    print("is any other philosoher is hungry if yes press y, else n")
    yn=input()
    if yn=='y':
         p1=int(input())
         philosopher(p1)
    
    take_fork(p)
    
    eat(p)
    put_forks(p)
    forks[p]=signal(forks[p])
    forks[(p-1)%n]=signal(forks[(p-1)%n])


while(True):
    pick=random.randint(0,n-1)
    philosopher(pick)
    cont=input("do you want to continue. if no press x")
    if(cont=='x'):
        exit(0)