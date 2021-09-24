#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct class{
    int rno;
    char *str;
    float marks;
}s1,s2;
void main(){
   printf("enter 1st student details\n");
   scanf("%d %f",&s1.rno,&s1.marks);
   fflush(stdin);
    s1.str="hi";
   printf("enter 2nd student details\n"); 
   scanf("%d %f",&s2.rno,&s2.marks);
   fflush(stdin);
   s2.str="hello";
   printf("1st student details\n");
   printf("%d %f",s1.rno,s1.marks);
   puts(s1.str);
   printf("2nd student details\n");
   printf("%d %f",s2.rno,s2.marks);
   puts(s2.str);
}