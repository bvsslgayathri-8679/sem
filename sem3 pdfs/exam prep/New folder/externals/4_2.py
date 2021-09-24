a,b=input().split(',')
for i in a:
    if i not in b:
        print('not anagrams')
        exit(0)
print('anagerams')