name<-readline(prompt="enter username: ")
age<- readline(prompt="enter age: ")
print(paste("name is ",name))
print(paste("age is ",age))
print(R.version.string)


print("First 10 Fibonacci numbers")
a<-0
b<-1
i=0
fib<-numeric(10)
fib[1]=0
fib[2]=1
while(i<8){
  c=a+b
  fib[i+3]=c
  a=b
  b=c
  i=i+1
}
paste(fib)



print('sequence of numbers from 20 to 50: ')
print(seq(20,50))
s=0
for (i in 20:50){
  s=s+i
  
}
print(paste('Mean of numbers from 20 to 60:',s/(50-20)))





n<-readline(prompt="enter a number: ")
s=readline(prompt="enter a character: ")
log=readline(prompt = "enter a logical value: ")
print(class(n))
n=as.complex(n)
print(class(n))
print(class(s))
s=as.complex(s)
print(class(s))
print(class(log))
log=as.complex(log)
print(class(log))


for(i in 1:100){
  if(i%%3==0 && i%%5==0){
    print("AAABBBBB")
  }
  else if(i%%3==0){
    print("AAA")
  }
  else if(i%%5==0){
    print("BBBBB")
  }
  else{
    print(i)
  }
  
  
}





print("First 10 letters in lower case:")
print(head(letters,10))
print("Last 10 letters in upper case:")
print(tail(LETTERS,10))

print("Letters between 22nd to 24th letters in upper case:")
print(LETTERS[22:24])



li=list()
n=readline(prompt="enter a num ")
for(i in 1:n){
  if(i%%2==0){
    li=append(li,i)
  }
}
print('List of even nos from 1 to n')
paste(li)


print('prime numbers up to a given number,n')
n=readline(prompt = "enter a num ")
for(i in 2:n){
  c=0
  for(j in 3:i-1){
    #print(j)
    #print(paste(i,i%%j,j))
    if(i%%j==0){
      c=c+1
      #print(c)
      break
    }
  }
  if(c==0){
    print(i)
  }
}


