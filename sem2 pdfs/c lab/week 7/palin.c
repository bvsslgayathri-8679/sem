#include<stdio.h>
#include<string.h>
void main(){
    char s[100];
    gets(s);
    int i,j=0,flag=1;
    int len=strlen(s);
    for(i=len-1;i>=0;i--,j++)
    {
        if(s[i]==s[j])
        continue;
        flag=0;
    }
    if(flag==1)
    printf("pelin");
    else
    {
        printf("not");
    }
    
}