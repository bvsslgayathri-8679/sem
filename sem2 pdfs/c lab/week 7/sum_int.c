
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
    char a[100];
    char b[100];
    printf("enter the 2 strings\n");

    gets(a);
    gets(b);
    int len1=strlen(a);
    int len2=strlen(b);
    int i=0;
    int flag1=1,flag2=1;
    printf("%s",a);
    while(len1)
    {
        if(isdigit(a[i])||a[i]=='\\')
        goto label1;
        if(isalpha(a[i]))
        {
            flag1=0;
            break;
           
        }
        label1:i++;
       
        len1--;
    }
    i=0;
    while(len2)
    {
        if(isdigit(a[i])||a[i]=='\\')
        goto label2;
        if(isalpha(b[i]))
        {
            flag2=0;
           
            break;
        }
        
        label2:i++;
       len2--;
    }
    if(flag1==0||flag2==0)
    {
        printf("cannot add 2 numbers\n");
        exit(0);
    }



    printf("sum of numbers is %d",atoi(a)+atoi(b));
    
}