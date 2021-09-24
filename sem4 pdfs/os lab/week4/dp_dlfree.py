import random
import time
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

def eating(p):
    print("philosopher ",p, " is eating")
    time.sleep(random.uniform(1,5))
    print("philosopher ",p, " finished eating ")

def eat(p):
    global forks
    if(forks[p]==1 and forks[(p-1)%n]==1):
        forks[p]=wait(forks[p])
        forks[(p-1)%n]=wait(forks[(p-1)%n])
    elif(forks[p]==0):
        print("philosopher ",p, "swaps the forks")
        forks[p],forks[(p-1)%n]=forks[(p-1)%n],forks[p]
    elif(forks[(p-1)%n]==0):
        print("philosopher ",p, "swaps the forks")
        forks[p],forks[(p-1)%n]=forks[(p-1)%n],forks[p]
    
    else:
        return
    eating(p)
    forks[p]=signal(forks[p])
    forks[(p-1)%n]=signal(forks[(p-1)%n])
    
def philosopher(p):
    global forks
    print("philosopher ",p," is hungry")
    eat(p)
    

while(True):
    pick=random.randint(0,n-1)
    philosopher(pick)
    
