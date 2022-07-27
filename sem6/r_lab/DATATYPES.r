#  Write an R program to create a vector which contains 10 random integer values between -50 and +50. 
sample(-50:50,10,replace=TRUE)


# Write an R program to create a 5 × 4 matrix, 3 × 3 matrix with labels and fill the matrix by rows and 2 × 2 matrix with labels and fill the matrix by columns

x <- matrix(c(1:20),nrow=5,ncol=4,byrow = TRUE,dimnames = list(c("r1","r2","r3","r4","r5"),c("c1","c2","c3","c4")))

y <- matrix(c(1:9),nrow = 3,ncol = 3,byrow = TRUE,dimnames = list(c("r1","r2","r3"),c("c1","c2","c3")))

z <- matrix(c(1:4),nrow = 2,ncol = 2,byrow = FALSE,dimnames = list(c("r1","r2"),c("c1","c2")))

print(x)
print(y)
print(z)


#Write an R program to sort a Vector in ascending and descending order.





# R program to sort a Vector in ascending and descending order.
a = c(10,-31,24,-67,9,0,-110)
print("Vector sorted in Ascending order :")
print(sort(a))
print("Vector sorted in Descending order :")
print(sort(a, decreasing=TRUE))
