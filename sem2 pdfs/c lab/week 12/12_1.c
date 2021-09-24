#include<stdio.h>
#include<stdlib.h>
void main(){
    FILE *fp1;
    char c;

    fp1=fopen("file1.txt","r");
    if(fp1==NULL)
    {
        printf("error");
        exit(0);
    }
    while((c=getc(fp1))!=EOF)
    {
        printf("%c",c);
    }

}