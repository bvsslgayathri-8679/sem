#Write an R program to create a simple bar plot of three subject’s marks, change the border color to brown and make inside bar lines as 90 degrees.

marks=c(10,20,30)
barplot(marks,main="marks of 3 subjects",xlab="subjects",ylab="marks",names.arg=c("telugu","maths","science"),angle=90,border="brown",horiz="FALSE")


#Write a program to read a csv file and analyze the data in the file in R.

setwd("G:/sem6/r_lab")

csv_data<-read.csv(file='sample.csv')
print(csv_data)
print(ncol(csv_data))
print(nrow(csv_data))


#Write an R program to draw an empty pie chart and empty plots specify the axes limits of the graph

plot.new()
plot(1,type="n",xlab="",ylab="",xlim=c(0,20),ylim=c(0,20))


#Write an R program to create a simple bar plot of four subject’s registered, assign the colors to each bar and assign the limit to x-axis as c(0,5) and y-axis as c(0,50).


marks<-c(40,30,30,40)
clr<-c("blue","pink","red","yellow")
barplot(marks,main="marks of 4 subjects",xlab="subjects",ylab="marks",xlim=c(0,5),ylim = c(0,50),col = clr,names.arg=c("s1","s2","s3","s4"))


#Write an R program to create a simple 3D pie chart, assign color and labels to each part.

library(plotrix)
x<-c(10,20,30,40)
pie3D(x,main="3d pie chart",labels=c("label 1","label 2","label 3","label 4"),col=c("pink","green","violet","red"))


#Write an R program to create a simple bar plot of five subject’s marks.
marks<-c(100,99,95,90,80)
subjects<-c("telugu","english","hindi","science","maths")
barplot(marks,names.arg = subjects,xlab="subjects",ylab=",marks",main="marks of 5 subjects",xlim=c(0,10),ylim=c(0,100))


#Write an R program to create a simple pie chart of four subjects registered, assign the colors to each block and display in anti-clockwise direction.

subjects<-c(20,40,50,60)
colors<-c("red","purple","blue","pink")
pie(subjects,main="Pie chart for 4 subjects registered",labels = c("maths","english","science","social"),col = colors,clockwise = FALSE)



#Write an R program to create a simple 3D pie chart, assign title to the chart and also split each part.

library(plotrix)
parts<-c(40,30,30,40)
label<-c("India","US","Newyork","London")
pie3D(parts,main="pie chart representing talents in each country",labels = label,col=c("yellow","pink","purple","red"),explode=0.1)



#Write an R program to draw an empty bar plot and empty plots specify the axes limits of the graph.

plot.new()
plot(1,type="n",xlab="",ylab="",xlim=c(0,20),ylim=c(0,20))


#Write an R program to create a simple pie chart of three subject’s marks, change the border color to pink and make inside bar lines as 60 degrees.

marks<-c(90,80,70)
pie(marks,labels = c("maths","science","social"),main="marks of 3 subjects",angle = 60,border = "pink")
