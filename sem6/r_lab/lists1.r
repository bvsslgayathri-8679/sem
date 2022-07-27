
#1
l=list("R","lab",12.2,88.8,c(10,20,30,40),TRUE,FALSE)
print(l)

#2

paste("Number of objects in the given list is ",length(l))


#3
li=list(c("family","friends","food"),matrix(c(1,2,3,4,5,6),nrow=3),list("c","c++","python","java"))
print(li)

names(li)=c("mylife","natural numbers","prog. languages")
print(li)


#4

li[2]=NULL
print(li)


#5
li[3]="new element"
print(li)
