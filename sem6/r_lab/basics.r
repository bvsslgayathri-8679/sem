sq<- function(n){
  for(i in 1:n){
    s=i*i
    print(s)
  }
}
num=readline(prompt = "enter a number: ")
sq(num)
