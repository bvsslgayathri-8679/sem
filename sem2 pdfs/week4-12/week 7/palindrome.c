#include<stdio.h>
#include<string.h>
void main(){
    char s[100],res[100];
    gets(s);
    int i,j=0;
    int len=strlen(s);
    for(i=len-1;i>=0;i--)
    {
        res[j]=s[i];
        j+=1;
        
    }
    res[len]='\0';
    
    if(!strcmp(s,res))
    {
        printf("palimdrome\n");
    }
    else
    {
        printf("not palindrome\n");
    }
    
}