from collections import Counter
n=input()
k=int(input())
c=Counter(n)
print(c.most_common(k))
