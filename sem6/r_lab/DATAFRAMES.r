#1
emp.data <- data.frame(
  id = c(1:5),
  name = c("A","B","C","D","E"),
  dept = c("IT","HR","IT","Finance","HR")
)

print(emp.data)

#get structure of dataframe
str(emp.data)

#print summary
print(summary(emp.data))

#extract specific columns
res <- data.frame(emp.data$id,emp.data$name)
print(res)




#2


emp.data <- data.frame(
  id = c(1:5),
  name = c("A","B","C","D","E"),
  dept = c("IT","HR","IT","Finance","HR"),
  stringsAsFactors = FALSE
)

emp.newrows <- data.frame(
  id = c(6:7),
  name = c("F","G"),
  dept = c("Finance","HR"),
  stringsAsFactors = FALSE
)

emp.newcols <- data.frame(
  place = c("Delhi","Hyderabad","Mumbai","Vizag","Chennai","Bengaluru","Kolkata")
)

print(emp.data)

emp.finalrows = rbind(emp.data,emp.newrows)
print(emp.finalrows)

emp.finalcols = cbind(emp.finalrows,emp.newcols)
print(emp.finalcols)
