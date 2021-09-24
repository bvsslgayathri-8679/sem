import numpy as np
arr=np.array(input().split())
print(arr)
arr=np.append(arr,12)
print(arr)
arr=np.insert(arr,1,23)
print(arr)
print(np.flip(arr))