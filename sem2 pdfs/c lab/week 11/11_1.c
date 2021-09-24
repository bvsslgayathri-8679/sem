#include<stdio.h>
struct node
{
    int a;
    float b;
    char c;

}p1;

void main(){
   printf("enter values of a,b,c of p1 struct\n");
   scanf("%d%f",&p1.a,&p1.b);
   fflush(stdin);
   scanf("%c",&p1.c);
   printf("%d %f %c ",p1.a,p1.b,p1.c);

}