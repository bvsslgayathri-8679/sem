a<-0
b<-1
for(i in 3:10){
  if(a==0 && b==1){
    print(a)
    print(b)
  }
  c<-a+b
  print(c)
  a<-b
  b<-c
}



m = 0
n = 1
print("The First 10 Fibonacci numbers are :")
for(i in 3:10){
  if(m == 0 && n == 1){
    print(m)
    print(n)
  }
  x = m + n
  m = n
  n = x
  print(x)
}


paste("Version Of R Installation : ",R.version.string)



# Write an R program to describe any five string handling functions.
paste("Hello","World")
nchar("Hello")
casefold("HElLo")
chartr("o","O","Hello Cools")
strsplit("Today is a Holiday"," ")


install.packages("tidyverse")


# Write an R program to count duplicate characters from a given string.

library(tidyverse)
input = readline(prompt="Enter a String : ")
a = c(strsplit(input, "")[[1]])
print(a)
x = duplicated(a)
print(x)
print("Count of Duplicate Characters in given string :")
print(a[x])
length(a[x])
data.frame(a[x])


install.packages("stringi")
# Write an R program to check the given string is palindrome or not.
library(stringi)
input = readline(prompt = "Enter a String : ")
if(stri_reverse(input) == input){
  cat("String",input,"is a Palindrome")
}else{
  cat("String",input,"is not a Palindrome")
}



#if substring is present in the string or not


x=readline(prompt="enter a string ")
sub=readline(prompt="enter substring")
grepl(sub,x)




head(letters,10)
tail(LETTERS,10)
LETTERS[22:25]


n<-readline(prompt = "enter a input ")
li=list()
for(i in 1:n){
  if(i%%2==0){
    li=append(li,i)
  }
}
print(li)


print(sample(c(-50:50),10,replace=TRUE))


matrix(c(1:20),nrow=5,ncol=4,byrow=TRUE,dimnames=list(c("r1","r2","r3","r4","r5"),c("c1","c2","c3","c4")))



x<-c(5,1,3,2,4)
sort(x)
sort(x,decreasing=TRUE)

min(x)
max(x)


li<-list(c(1:4),matrix(1:9,nrow=3,ncol=3),"r",44,44.5,TRUE)
print(li)



emp.data<-data.frame(id=c(1:5),name=c("hi","bi","pi","ri","ti"),job=c("j1","j2","j3","j4","j5"))
print(emp.data)
print(summary(emp.data))

c1<-matrix(c(1:9),nrow=3,ncol=3)
c2<-matrix(c(10:18),nrow=3,ncol=3)
c3<-matrix(c(19:27),nrow=3,ncol=3)

matrix(t(cbind(c1,c2,c3)),ncol=3, byrow=T)

A=rbind(c1,c2,byrow=T)
print(A)
B=rbind(A,c3,byrow=T)
print(B)


A=cbind(c1,c2,nrow=3,ncol=3)
B=cbind(A,c3,nrow=3,ncol=3)
print(B)



a = matrix(c(1:9),nrow=3,ncol=3)
b = matrix(c(10:18),nrow=3,ncol=3)
c = matrix(c(19:27),nrow=3,ncol=3)
print(a)
A = rbind(a,b)
B = rbind(A,c)
print(B)
matrix(t(cbind(a,b,c)),ncol=3, byrow=T)




v1<-c(1,2,3)
v2<-c(4,5,6,7,8)
arr=array(c(v1,v2),dim=c(3,3,2))
print(arr[2,,2])
print(arr[3,3,1])




marks<-c(10,20,30)
barplot(marks,main="marks of 3 subjects ",xlab="subjects",
        ylab="marks",names.arg=c("maths","phy","chem"),
        border="brown",angle=90,col=c("red","green","blue"),horiz="FALSE")

#marks = c(80,92,65)
#barplot(marks, main="Comparison of 3 subjects marks", xlab="Subject", ylab="Marks",
 #       names.arg=c("English","Maths","Science"),
  #      col="lightblue", border="brown",angle=90, horiz="FALSE")



setwd("G:/sem6/r_lab")
csvdata=read.csv(file="sample.csv")
print(csvdata)
print(nrow(csvdata))
print(ncol(csvdata))
print(str(csvdata))


plot.new()
plot(1,xlab="",ylab="",xlim=c(1,20),ylim=c(1,20))


marks<- c(10,20,30,40)
barplot(marks,main="marks of 4 subjects ",xlab="subjects ",ylab="marks ",names.arg=c("m1","m2","m3","m4"),col=c("red","blue","pink","green"),xlim=c(0,5),ylim=c(0,50))


library(plotrix)
marks<-c(10,20,30)
pie3D(marks,main="marks of 3 subjects ",labels=c("1","2","3"),col=c("green","pink","yellow"),explode=0.2)



library(stringi)
input<-readline(prompt="enter a string ")
if(stri_reverse(input)==input){
  print("palindrome")
}else{
  print("not")
}

print(substr(input,5,7))

print(tolower(input))
print(toupper(input))


a=c(strsplit(input,""))[[1]]
x=duplicated(a)
print(a[x])
print(length(a[x]))


input="Abc is a"
sub="abc"
if(grepl(sub,input)==TRUE){
  print("yes, substring")
}else{
  print("no")
}


print(casefold(input))


v1<-matrix(c(1:9),nrow=3,ncol=3)
v2<-matrix(c(10:18),nrow=3,ncol=3)
v3<-matrix(c(19:27),nrow=3,ncol=3)

print(matrix(t(cbind(v1,v2,v3)),ncol=3,byrow=TRUE))
