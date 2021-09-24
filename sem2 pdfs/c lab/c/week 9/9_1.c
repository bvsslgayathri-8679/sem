#include<stdio.h>
void main(){
    int a=10;
    int *p1=&a;
    printf("%d %d %d %d %d",*p1,a,&p1,&a,p1);
}
