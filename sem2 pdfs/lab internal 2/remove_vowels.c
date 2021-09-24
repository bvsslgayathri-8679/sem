#include<stdio.h>
#include<string.h>
void main(){
    char s[100],res[100];
    printf("Enter a string\n");
    gets(s);
    int i,j=0,len;
    len=strlen(s);
    for(i=0;i<len;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
         continue;   
        }
        res[j]=s[i];
        j++;
    
    }
    res[j]='\0';
    printf("String after removing vowels is\n");
    puts(res);

}
