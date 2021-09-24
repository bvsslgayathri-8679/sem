def parent_node(pos):
    return pos//2

def left_child(pos):
    return pos*2+1

def right_child(pos):
    return pos*2+2

def leaf_node(heap,pos):
    global size
    if(pos<=size or pos//2+1>=size):
        return True
    return False
def heapify():
    pass
def swap(heap,a,b):
    heap[a],heap[b]=heap[b],heap[a]

def insert_node(heap,n):
    global pos
    heap[pos]=n
    pos+=1
    for i in range(pos//2-1,-1,-1): 
        maxheapify(heap,pos,i)

def delete_min(heap):
   
    global front,pos,n
    rem=heap[front] 
    heap[front]=-999999
    maxheapify(heap,pos,front)
    pos-=1
    n-=1
    return rem


def maxheapify(heap,pos,i):

    max=i
    left=left_child(i)
    right=right_child(i)
    if left<pos and heap[left]>heap[max]:
        max=left
    
    if right<pos and heap[right]>heap[max]:
        max=right
    
    if max!=i:
        heap[i],heap[max]=heap[max],heap[i]
        maxheapify(heap,pos,max)
def display(heap):
    global n
    for i in range(0, n//2):
        print()
        if(heap[i]!=-999999 and i<pos):
            print(" P : ", heap[i],end=" ")
            if(heap[i*2+1]!=-999999):
                print("---LC : ",heap[2 * i+1 ],end="")
            if(heap[i*2+2]!=-999999):
                print("\n       \\---RC : ",heap[2 * i + 2])

        else:
            return

pos=0
size=1
n=int(input('size of heap'))
front=0
heap=[-999999]*n
p=int(input('number of insertions '))

for i in range(p):
    insert_node(heap,int(input()))

print('heap after insertion of elements')
display(heap)
min_=delete_min(heap)
print('heap after deletion of maximum ',min_)
display(heap)
