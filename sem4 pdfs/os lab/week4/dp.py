# def philosopher(void):
#     while True:
#         Thinking()
#         wait(take_fork(s[i]))
#         wait(take_fork((i-1)%n))
#         eat()
#         Signal(put_fork(i)
#         put_fork((i+1)%n)

import random
n=int(input("enter no of philosophers"))
p=[]
print()
forks=[1]*n
mutex=1
state=['T']*n
semaphore=[0]*n

def wait(i):
    i-=1
    return i

def signal(i):
    i+=1
    return i
def test(p):
    global state,forks,n,semaphore
    if p==1:
        if((state[p]=='H' and state[n-1]!='E' and state[p+1]!='E') or( forks[p]==1 and forks[(p-1)%n]==1) ):
            state[p]='E'
            semaphore[p]=signal(semaphore[p])
    elif p==n:
        if((state[p]=='H' and state[p-1]!='E' and state[0]!='E') or( forks[p]==1 and forks[(p-1)%n]==1) ):
            state[p]='E'
            semaphore[p]=signal(semaphore[p])
    else:
        if((state[p]=='H' and state[p-1]!='E' and state[1]!='E') or( forks[p]==1 and forks[(p-1)%n]==1) ):
            state[p]='E'
            semaphore[p]=signal(semaphore[p])


def take_fork(p):
    global mutex,semaphore
    mutex=wait(mutex)
    state[p]='H'
    test(p)
    mutex=signal(mutex)
    semaphore[p]=wait(semaphore[p])

def put_forks(p):
    global mutex,state
    mutex=wait(mutex)
    print("is any other philosoher is hungry")
    p1=int(input())
    if p1:philosopher(p1)
    state[p]='T'
    print("philosopher " , p ," has finished eating")
    mutex=signal(mutex)

def eat(p):
    print("philosopher ",p," is eating ")
def philosopher(p):
    global forks,n,mutex
    forks[p]=wait(forks[p])
    forks[(p-1)%n]=wait(forks[(p-1)%n])
    print("forks ",p,(p-1)%n," are taken by philosopher ",p)
    take_fork(p)
    print("is any other philosoher is hungry")
    p1=int(input())
    if p1:philosopher(p1)
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





'''
# def philosopher(void):
#     while True:
#         Thinking()
#         wait(take_fork(s[i]))
#         wait(take_fork((i-1)%n))
#         eat()
#         Signal(put_fork(i)
#         put_fork((i+1)%n)

import random
n=int(input("enter no of philosophers"))
p=[]
print()
forks=[1]*n
mutex=1
state=['T']*n
semaphore=[0]*n

def wait(i):
    i-=1
    return i

def signal(i):
    i+=1
    return i
def test(p):
    global state,forks,n,semaphore
    
    if p==1:
        if((state[p]=='H' and state[n-1]!='E' and state[p+1]!='E') or( forks[p]==1 and forks[(p-1)%n]==1) ):
            state[p]='E'
            semaphore[p]=signal(semaphore[p])
    elif p==n:
        if((state[p]=='H' and state[p-1]!='E' and state[0]!='E') or( forks[p]==1 and forks[(p-1)%n]==1) ):
            state[p]='E'
            semaphore[p]=signal(semaphore[p])
    else:
        if((state[p]=='H' and state[p-1]!='E' and state[1]!='E') or( forks[p]==1 and forks[(p-1)%n]==1) ):
            state[p]='E'
            semaphore[p]=signal(semaphore[p])


def take_fork(p):
    global mutex,semaphore
    mutex=wait(mutex)
    state[p]='H'

    test(p)
    
    mutex=signal(mutex)
    semaphore[p]=wait(semaphore[p])

def put_forks(p):
    global mutex,state
    mutex=wait(mutex)
    
    state[p]='T'
    print("philosopher " , p ," has finished eating")
    mutex=signal(mutex)

def eat(p):
    print("philosopher ",p," is eating ")
def philosopher(p):
    global forks,n,mutex
    forks[p]=wait(forks[p])
    forks[(p-1)%n]=wait(forks[(p-1)%n])
    print("forks ",p,(p-1)%n," are taken by philosopher ",p)
    take_fork(p)
    print("is any other philosoher is hungry if yes press y, else n")
    yn=input()
    if yn=='y':
         p1=int(input())
         philosopher(p1)
    eat(p)
    put_forks(p)
    forks[p]=signal(forks[p])
    forks[(p-1)%n]=signal(forks[(p-1)%n])


while(True):
    pick=random.randint(0,n-1)
    philosopher(pick)
    cont=input("do you want to continue. if no press x")
    if(cont=='x'):
        exit(0)'''