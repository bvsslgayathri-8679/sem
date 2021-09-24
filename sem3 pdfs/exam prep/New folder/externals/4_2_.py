a,b=input().split(',')
a.lower()
b.lower()
if(sorted(a)==sorted(b)):
    print('anagrams')
else:print('not anagrams')