""" a=input()
n=int(input())
li=[(i,a.count(i)) for i in a]
li=list(dict.fromkeys(li))
li= sorted(li, key=lambda tup: tup[1],reverse=True)
print(li[0:n]) 
 """
from collections import Counter
n=int(input())
counts = Counter(input())
print(counts.most_common(n))