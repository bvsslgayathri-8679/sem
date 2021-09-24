#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
int main(int argc,int *argv[])
{
    int n;
    int a,b;
    char c;
    a=atoi(argv[1]);
    b=atoi(argv[2]);
    c=argv[3];
    if(argc<=3)
    {
        printf("insufficient arg\n");
        exit(0);
    }
    switch (c)
    {
    case '+':printf("%d",a+b);

        break;
    case '-':printf("%d",a-b);

        break;
    case '*':printf("%d",a * b);

        break;
    case '/':printf("%d",a/ b);

        break;
    default:printf("no ");
        break;
    }
}