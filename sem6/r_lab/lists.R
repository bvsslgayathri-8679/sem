x<-list(p=c(1,2,3),q=c('x','y','z'))
print(x$p)
x[['p']]<-c(11,12,13)
print(x)
x[['t']]<-c(111.0,211.0,311.0)
print(x)
x[['p']]<-NULL
print(x)




#Write a R program to create a list containing strings, numbers, vectors and a logical values
li<-list(c('abc','def','ghi'),c(1,2,3),c(c(10,11),c(12,13),c(14,15)),c(TRUE,FALSE,TRUE))
print(li)

#Write a R program to list containing a vector, a matrix and a list and give names to the elements in the list


