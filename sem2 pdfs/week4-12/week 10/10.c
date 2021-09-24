#include<stdio.h>
void func(int );
void main(){
    int ch;
    
    void (*fun)(int)=&func;
    int *arr[100],i;
    int array[100];
    int n,*p1,**p2;
    scanf("%d",&n);
    printf("enter choice\ni. Pointers to Pointers ii. Array of Pointers iii. Pointer to Array iv. Pointers to Functions\n");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:p1=&n;
           p2=&p1;
            printf("pointer to pointers\n");
            printf("value of n %d\n",n);
            printf("value of n %d\n",*p1);
            printf("value of n %d\n",**p2);
        break;
    case 2: for(i=0;i<n;i++){
        scanf("%d",(arr+i));

    }
    printf("traversing using array of pointers\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(arr+i));
    }
    case 3:
    p1=array;

    for(i=0;i<n;i++){
        scanf("%d",&array[i]);

    }
    for (i = 0; i < n; i++)
    {
        printf("%d ",*(p1++));
    }
    
    case 4:(*fun)(n);
    break;
    default:
        break;
    }
}
void func(int a){
    printf("%d is square ",a*a);
}