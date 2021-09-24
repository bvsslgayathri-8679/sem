#include<stdio.h>
void main(){
    int n,a;
    scanf("%d",&n);
    a=n;
    printf("Value of %d after pre-increment is %d\n",n,++n);
    printf("Value of %d after post-increment is %d",a,a++);

}