#include<stdio.h>
int a,b;
int fun1(int a,int b);
int fun2();
void fun3(int a,int b);
void fun4();
void main()
{
    
    int s,res;
    int ch;
    printf("enter users choice \n 1.with arguments and return type \n 2.without arguments and return type \n 3. with arguments and no return type \n 4.without arguments and no return type");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
    scanf("%d %d",&a,&b);
        res=fun1(a,b);
        printf("%d",res);

        break;
    case 2:
        res=fun2();
        printf("%d",res);
        break;
    case 3:
        
        scanf("%d %d",&a,&b);
        fun3(a,b);
        break;
    case 4:
        fun4();
        break;
    default:
        break;
    }
}
int fun1(int a,int b)
{
    return a+b;
}
int fun2()
{
    printf("enter numbers");
    scanf("%d %d",&a,&b);
    return a+b;
}
void fun3(int a,int b)
{
    printf("%d",a+b);
}
void fun4(){
    printf("enter numbers");
    scanf("%d %d",&a,&b);
    printf("%d",a+b);
}


