def fun(a,b):
    for i in a:
        if i not in b:
            return 0
    return 1
a,b=input().split(',')
print("yes, Strings "+a,b+ " are anagrams ") if fun(a,b) else print("no, Strings "+a,b +" are not anagrams ")



""" if sorted(a)==sorted(b):print("yes, Strings "+a,b+ " are anagrams ")
else:print("no, Strings "+a,b +" are not anagrams ")
 """