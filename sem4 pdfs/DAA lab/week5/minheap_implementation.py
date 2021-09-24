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
        minheapify(heap,pos,i)

def delete_min(heap):
   
    global front,pos,n
    rem=heap[front] 
    heap[front]=999999
    minheapify(heap,pos,front)
    pos-=1
    n-=1
    return rem


def minheapify(heap,pos,i):

    min=i
    left=left_child(i)
    right=right_child(i)
    if left<pos and heap[left]<heap[min]:
        min=left
    
    if right<pos and heap[right]<heap[min]:
        min=right
    
    if min!=i:
        heap[i],heap[min]=heap[min],heap[i]
        minheapify(heap,pos,min)


def display(heap):
    global n
    for i in range(0, n//2):
        print()
        if(heap[i]!=0 and heap[i]!=999999 and i<pos):
            print(" P : ", heap[i],end=" ")
            if(heap[i*2+1]!=0 and heap[i*2+1]!=999999):
                print("---LC : ",heap[2 * i+1 ],end="")
            if(heap[i*2+2]!=0 and heap[i*2+2]!=999999):
                print("\n       \\---RC : ",heap[2 * i + 2])

        else:
            return


def rootnode(heap):
    return heap[0]

pos=0
size=1
n=int(input('size of heap'))
front=0
heap=[0]*n
p=int(input('number of insertions '))

for i in range(p):
    insert_node(heap,int(input()))
print('heap after insertion of elements')
display(heap)
root=rootnode(heap)
print("root node of heap is ",root)
min_=delete_min(heap)
print('heap after deletion of minimum ',min_)
display(heap)







# def display(heap):
#     global n,pos
    
#     for i in range(0,n//2,1):
#         if(i<pos//2):
#             print("parent node is ",heap[i])
#             if(i*2+1<pos and heap[left_child(i)]!=999999):
#                 print(" left child is ",heap[left_child(i)])
#             elif(i*2+1<pos and heap[left_child(i)]==999999):
#                 print(" left child is -")
#             else:
#                 print(" left child is ",heap[left_child(i)])
#             if(i*2+2<pos and heap[right_child(i)]!=999999):
#                 print(" right child is ",heap[right_child(i)])
#             elif(i*2+2<pos and heap[right_child(i)]==999999):
#                 print(" right child is -")
#             else:
#                 print(" right child is ",heap[right_child(i)])




# def display(heap):
#     global n,pos,p,li1
    
#     for i in range(0,n//2+1,1):
#         if(i<pos//2):
#             print(heap[i], end="")
#             if(heap[i] not in li1):
#                 p+=1
#                 li1.append(heap[i])
#             if(p==n):
#                 return
#             if(i*2+1<=pos and heap[left_child(i)]!=999999):
#                 if(heap[i*2+1] not in li1):
#                     p+=1
#                     li1.append(heap[i*2+1])
            
#                 print("---",heap[left_child(i)])
#             if(p==n):
#                 return
   
#             if(i*2+2<=pos and heap[right_child(i)]!=999999):
#                 print("\\")
#                 print("  --",heap[right_child(i)])
#                 if(heap[i*2+2] not in li1):
#                     p+=1
#                     li1.append(heap[i*2+2])


# def display(heap):
#     global n,pos,p,li
    
#     for i in range(0,n//2,1):
#         if(i<pos//2):
#             if(heap[i] not in li):
#                 p+=1
#                 li.append(heap[i])
#             print("parent node is ",heap[i])
#             if p==n:
#                 return
#             if(heap[i*2+1] not in li):
#                 p+=1
#                 li.append(heap[i*2+1])
#             if(i*2+1<pos and heap[left_child(i)]!=999999):
#                 print(" left child is ",heap[left_child(i)])
#             elif(i*2+1<pos and heap[left_child(i)]==999999):
#                 print(" left child is -")
#             elif i*2+2<pos and p==n:
#                 print(" left child is ",heap[left_child(i)])
#             if p==n:
#                 return
#             if(heap[i*2+2] not in li):
#                 p+=1
#                 li.append(heap[i*2+2])
#             if(i*2+2<pos and heap[right_child(i)]!=999999):
#                 print(" right child is ",heap[right_child(i)])
#             elif(i*2+2<pos and heap[right_child(i)]==999999):
#                 print(" right child is -")
#             elif i*2+2<pos and p==n:
#                 print(" right child is ",heap[right_child(i)])

# def rootnode(heap):
#     return heap[0]

# p=0
# li=[]







# def display(heap):
#     global n
#     for i in range(0, n//2+1):
#             if(heap[i]!=0 and heap[i]!=999999 and i<=pos):

#                 print(" PARENT : ", heap[i])
#             else:
#                 return

#             if(heap[i*2+1]!=0 and heap[i*2+1]!=999999 and i*2+1<pos):
#                 print("   LEFT CHILD : ",heap[2 * i+1 ])
#             else:
#                 return

#             if(heap[i*2+2]!=0 and heap[i*2+2]!=999999 and i*2+2<=pos):
#                 print("     RIGHT CHILD : ",heap[2 * i + 2])
#             else:
#                 return