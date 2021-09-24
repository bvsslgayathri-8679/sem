#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main(){
    char a[100];
    gets(a);
    int i,len;
    len=strlen(a);
    for(i=0;i<len;i++)
    {
        if(islower(a[i]))
        {
            a[i]=toupper(a[i]);
        }
        else if(isupper(a[i]))
        {
            a[i]=tolower(a[i]);
        }
    }
    puts(a);
}