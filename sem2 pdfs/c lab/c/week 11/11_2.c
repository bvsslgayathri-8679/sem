#include<stdio.h>
struct node
{
    int b;
    int a;
}*s1,*s2,s;
struct node* s1=&s;

void main(){
    s2=&s;
    printf("enter details\n");
    scanf("%d",&(s1->a));
    printf("enter details\n");
    scanf("%d",&(s1->b));
    printf("enter details\n");
    scanf("%d",&((*s2).a));
    printf("enter details\n");
    scanf("%d",&((*s2).b));
    printf("%d %d %d %d",s1->a,s1->b,(*s2).a,(*s2));

}


