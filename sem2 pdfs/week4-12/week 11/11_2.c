#include<stdio.h>
struct node
{
    int a;
    float b;

}*p1,n;

void main(){
    p1=&n;
    printf("enter a value\n");
    scanf("%d",&p1->a);
    printf("enter b value\n");
    scanf("%f",&p1->b);
    printf("values are %d %f",p1->a,p1->b);
    
}