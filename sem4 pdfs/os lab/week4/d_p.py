import random
n=int(input("enter no of philosophers"))
p=[]
print()
state=['T']*n




def eat(p):
    global state,n
    if p==1:
        if((state[p]=='H' and state[n-1]!='E' and state[p+1]!='E')):
            state[p]='E'
            print("philosopher ",p," is eating ")
    elif p==n:
        if((state[p]=='H' and state[p-1]!='E' and state[0]!='E') ):
            state[p]='E'
            print("philosopher ",p," is eating ")
    else:
        if((state[p]=='H' and state[p-1]!='E' and state[1]!='E')):
            state[p]='E'
            print("philosopher ",p," is eating ")
    if (state[p]=='H' and (state[n-1]=='E' or state[p+1]=='E')):
        print("professor ",p,"has to wait")
    

def take_fork(p):
    global state
    print("professor ",p," is hungry")

    state[p]='H'


def put_forks(p):
    global state
    state[p]='T'
    print("professor ",p," has completed eating")




p1=random.randint(0,n-1)
q=random.randint(0,n-1)
r=random.randint(0,n-1)
print("professor ",p1," is thinking")
print("professor ",q," is thinking")


take_fork(p1)
take_fork(q)
eat(p1)
eat(q)
take_fork(r)
put_forks(p1)
eat(r)
put_forks(q)
put_forks(r)

