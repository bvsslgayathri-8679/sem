#include<stdio.h>
void func();

void main(){
    void (*func_ptr)()=&func;
    int a=5;
    int *p1,**p2;
    p1=&a;
    p2=&p1;
    scanf("%d",&a);
    printf("%d %d",*p1,**p2);



    int *arr[10];
    int arr1[10];
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr1[i]);
        arr[i]=&arr1[i];
    }
    for(int i=0;i<10;i++)
    {
        printf("%d",*arr[i]);
    }

    int *ptr1=arr1;
    for(int i=0;i<10;i++)
    printf("%d",*(ptr1+i));
    func_ptr();
    
}
void func(){
    printf("hello");
}