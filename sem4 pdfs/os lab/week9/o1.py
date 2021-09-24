def lru(pages,n,capacity):
    frame=[]
    num=0
    for i in range(len(pages)):
        dummy=[]
        if i<capacity:
            frame.append(pages[i])
            num+=1
        else:
            if pages[i] in frame:
                continue
            else:
                flag=0
                count=0
                num+=1
                
                for j in range(i,len(pages)-1,1):
                    if pages[j] in frame:
                        if count==len(frame)-1:
                            for k in range(len(frame)):
                                if frame[k] not in dummy:
                                    ind=frame.index(frame[k])
                            frame.remove(frame[ind])
                            frame.insert(ind,pages[i])
                            flag=1
                            break
                            # frame.append(pages[i])
                        count+=1
                        dummy.append(pages[j])

                if len(dummy)<=2 and flag==0:
                    
                    frame.remove(frame[ind1])
                    frame.insert(ind,pages[i])



    print(frame)        
    return num
pages=list(map(int,input().split()))
n=len(pages)
capacity=int(input())

print("number of pagefaults are",lru(pages,n,capacity))




'''
count1=0
                    flag1=0
                    dummy1=[]
                    for x in range(i,-1,-1):
                        if pages[x] in frame:
                            dummy1.append(pages[x])
                        
                        if len(dummy1)>=2:
                            for k in range(len(frame)):
                                if frame[k] not in dummy1:
                                    ind1=frame.index(frame[k])

'''