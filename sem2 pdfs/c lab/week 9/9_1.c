#include<stdio.h>
void power(int *);
void main(){
    int a,*ptr;
    ptr=&a;
    scanf("%d",&a);
    printf("value of a %d\n",a);
    printf("address of a %d\n",&a);
    printf("value of a using ptr1 %d\n",*ptr);
    printf("address of a %d\n",ptr);
    printf("address of ptr %d\n",&ptr);
}

