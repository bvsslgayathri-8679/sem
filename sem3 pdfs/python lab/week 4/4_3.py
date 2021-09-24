def fun(a,b):
    if b in a:return 1 
a,b=input().split(',')
print("yes,Substring "+b+" is present in substring "+a) if fun(a,b) else print("no,Substring "+b+" is not present in substring "+a)

import re
a,b=input().split(',')

if re.search(b,a):
    print("yes,Substring "+b+" is present in substring "+a)
else:
    print("no,Substring "+b+" is not present in substring "+a)

 