#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void main(){
    char ch[100],c;
    int i;
    gets(ch);
    fflush(stdin);
    i=0;
    scanf("%c",&c);
    while(ch[i]!='\0')
    {
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U')
        {
            ch[i]=c;
        }
        i+=1;
    }
    i=0;
    while(ch[i]!='\0')
    {
    printf("%c",ch[i]);
    
    i+=1;}
    
}