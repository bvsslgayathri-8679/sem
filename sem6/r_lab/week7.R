n<-c(1:5)
print(n)


x<-c("abc","def","ghi")
n<-c(1:5)
print(paste("Type of elements of given vector is ",typeof(x)))
print(paste("Type of elements of given vector is ",typeof(x)))


x<-c("abc","def","ghi")
n<-c(1:5)
print(paste("total number of elements in a given vector x is",length(x)))
print(paste("total number of elements in a given vector n is",length(n)))

x<-c("abc","def","ghi")
n<-c(1:5)
print("elements of vector x: ")
for(i in x){
  print(i)
}
print("elements of vector n: ")

for(i in n){
  print(i)
}


n<-c(1:5)
n=n[!n %in% (length(n)-1):length(n)]
print(n)

n<-c(1:5)
n<-head(n,-2)
print(n)

#p1=c()
#p<-c(1:20)
#for(i in p){
 # if(i>3){
  #  p=append(p,i)
  #}
#}
#print(p1)

n<-c(1:10)
n<-n[(n>3)]
print(n)

n1=c(1:5)
n2=c(11:15)
paste("addition of 2 vectors is: ")
print(n1+n2)
paste("subtraction of 2 vectors is: ")
print(n1-n2)
