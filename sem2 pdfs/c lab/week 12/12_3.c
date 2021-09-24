#include<stdio.h>
#include<stdlib.h>
void main(){
    FILE *fp1;
    char c;
    int l=1,ch=1,w=1;
    fp1=fopen("file1.txt","r");
    if(fp1==NULL)
    {
        printf("error");
        exit(0);
    }
    while((c=fgetc(fp1))!=EOF)
    {
        
        if(c==' '||c=='\t'||c=='\n'||c=='\0')
        {
            w+=1;
        }
        if(c=='\n'||c=='\0')
        {
            l+=1;  
        }
        ch+=1;
        
    }
    printf("%d %d %d",ch,w,l);
}