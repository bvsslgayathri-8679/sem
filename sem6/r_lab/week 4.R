#1
defval<-function(x=9,y=10)
{
  mul=x*y
  print(paste("Product of 2 numbers is ",mul))
  
}

defval(20,4)
defval(4)
defval()


defval<-function(x,y=10)
{
  x=2
  mul=x*y
  print(paste("Product of 2 numbers is ",mul))
  
}

defval(20,4)
defval(4)
defval()




#2
check<-function(n){
  if(n==0){
    print("Number entered is 0")
  }
  else if(n==1){
    print("Number entered is 1")
    
  }
  else{
    print("Number entered is other than 0 and 1")
  }
}

n<-readline(prompt="Enter a number: ")
check(n)




#3

perfect<-function(n){
  n=as.numeric(n)
  sum=0
  for(i in 1:n){
    if(n%%i==0){
      sum=sum+i
    }
  }
  if((sum-n)==n){
    print(paste(n," is a perfect number "))
  }
  else{
    
      print(paste(n," is not a perfect number "))
      
    }
  
}

n<-readline(prompt="Enter a number: ")
perfect(n)


