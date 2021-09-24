from queue import Queue
 
def fifo(pages,n,capacity):
    s=set()
    index=Queue()
    pagefaults=0
    for i in range(n):
        if len(s)<capacity:
            if pages[i] not in s:
                s.add(pages[i])
                pagefaults+=1
                index.put(pages[i])
                print(pages[i],"is added to queue")
        else:
            if pages[i] not in s:
                value=index.queue[0]
                index.get()
                print(value,"is replaced by ",pages[i])
                s.remove(value)
                s.add(pages[i])
                index.put(pages[i])
                pagefaults+=1
            else:
                print("no page fault")
    return pagefaults



pages=list(map(int,input().split()))
n=len(pages)
capacity=int(input())

print("number of pagefaults are",fifo(pages,n,capacity))

''' 
7 0 1 2 0 3 0 4 2 3 0 3 2
4
'''