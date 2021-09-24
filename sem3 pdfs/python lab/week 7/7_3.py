def vowelcount(n):
    a=sum([1 for i in n if i in 'aeiouAEIOU'])
    return a

n=input().split()
print(sorted(n,key=vowelcount))

