#include<stdio.h>
#include<string.h>
void main(){
    char a[100],b[100];
    int k=0;
    gets(a);
    int len=strlen(a);
    for(int i=0;i<len;i++)
    {
        if(a[i]=='a' || a[i]=='e' ||a[i]=='i' || a[i]=='o' ||a[i]=='u' || a[i]=='A' ||a[i]=='E' || a[i]=='I' ||a[i]=='O' || a[i]=='U')
        continue;
        else
        {
            b[k]=a[i];
            k+=1;
        }
        
    }
    len=strlen(b);
    b[len-1]='\0';
    puts(b);
}