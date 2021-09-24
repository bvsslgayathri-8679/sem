from collections import Counter
n=int(input())
p=input()
li=Counter(p)
print(li.most_common(4))
