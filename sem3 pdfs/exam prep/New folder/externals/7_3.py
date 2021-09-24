

def vowelcount(n):
    c=0
    c=sum([1 for i in n if i in 'AEIOUaeiou'])
    return c

n=input().split()
print(sorted(n,key=vowelcount))

