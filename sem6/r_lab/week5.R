res<-format(24.123456789,digits=9)
print(res)

str="gayatri vidya parishad college of engineering(a)"
print(paste("number of characters in str is",nchar(str)))


str1<-c(str,"gvp","college","a")
print(nchar(str1))


print(toupper(str))
print(tolower(str))
print(substr(str,5,10))
print(paste("is word hello present in str"))
print(grep("hello",str))
print(paste("is word college present in str"))
print(grep("college",str))


paste("hello","hi",str,sep="-")


print(strsplit(str,' '))


sprintf("number of characters in '%s' is %d",str,nchar(str))


print(cat(str,"gvpce","jntu",sep=","))

print("replacing engineering with engg. ")
print(sub("engineering","engg.",str))

print(casefold(c("heLLo","gVp"),upper=TRUE))
print(casefold(c("HeLLo","gVp")))


str="gayatri vidya parishad college of engineering(a)"

str<-format(str,width=55,justify = "c")
print(str)


str="gayatri vidya parishad college of engineering(a)"

str<-format(str,width=55,justify = "r")
print(str)

