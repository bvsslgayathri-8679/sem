def signal(s):
    s+=1
    return s
def wait(s):
    s-=1
    return s
def producer():
    global empty,full,i,mutex,n
    print(mutex)
    if mutex==1 and empty!=0:
        mutex=wait(mutex)
        full=signal(full)
        empty=wait(empty)
        i+=1
        print("Item",i,"is produced")
        print(full,"items are filled in buffer")
        print(empty,"items are empty in buffer")
        mutex=signal(mutex)
    else:
        print("Buffer is full")
def consumer():
    global empty,full,i,mutex
    if mutex==1 and full!=0:
        mutex=wait(mutex)
        full=wait(full)
        empty=signal(empty)
        print("Item",i,"is consumed")
        print(full,"items are filled in buffer")
        print(empty,"items are empty in buffer")
        i-=1
        mutex=signal(mutex)
    else:
        print("Buffer is empty")
n=int(input("Enter the buffer size:"))
empty=n
full=0
i=0
mutex=1
print("Enter choice\n1.Producer\n2.Consumer\n3.Exit")
ch=int(input("Enter choice:"))
while ch!=3:
    if ch==1:
        producer()
    elif ch==2:
        consumer()
    else:
        break
    ch=int(input("Enter choice:"))
