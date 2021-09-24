
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

void main(){
    char a[100];
    char b[100];
    printf("enter the 2 strings\n");
    gets(a);
    gets(b);
    int i=0;
    int flag1=1,flag2=1;
    while(a[i]!='\0')
    {
        if(isalpha(a[i]))
        {
            flag1=0;
            break;
        }
        i++;
       
    }
    i=0;
    while(b[i]!='\0')
    {
        if(isalpha(b[i]))
        {
            flag2=0;
            break;
        }
        i++;
       
    }
    if(flag1==0||flag2==0)
    {
        printf("cannot add 2 numbers\n");
        exit(0);
    }



    printf("sum of numbers is %d",atoi(a)+atoi(b));
    
}