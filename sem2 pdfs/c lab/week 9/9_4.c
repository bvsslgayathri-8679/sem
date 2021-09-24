#include<stdio.h>
void power(int *);
void main(){
    int a,*ptr;
    ptr=&a;
    scanf("%d",&a);
    
    power(ptr);
    printf("square is %d ",*ptr);
}

void power(int *ptr){
    
    *ptr=*ptr * *ptr;
}