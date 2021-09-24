#include<stdio.h>
#include<stdlib.h>
void main(){
    int n1,n2;
    int *ptr1,*ptr2;
    ptr1=&n1;
    ptr2=&n2;
    scanf("%d %d",&n1,&n2);
    printf("pointer increment\nbefore: %d ",ptr1);
    ptr1++;
    printf("\nafter: %d \n",ptr1);
    printf("pointer decrement\nbefore: %d ",ptr1);
    ptr1--;
    printf("\nafter: %d \n",ptr1);
    printf("pointer addition %d\n",ptr1+2);
    printf("pointer subtraction %d\n",ptr1-2);
    if(ptr1>ptr2)
    {
        printf("ptr1 %d > ptr2 %d",ptr1,ptr2);
    }
    else
    {
        printf("ptr2 %d> ptr1 %d",ptr1,ptr2);
    }
    

}
