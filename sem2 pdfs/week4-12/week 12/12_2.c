#include<stdlib.h>
#include<stdio.h>
void main(){
    FILE *fp1,*fp2;
    char c;
    fp1=fopen("file1.txt","r");
    fp2=fopen("file2.txt","w");
    if(fp1==NULL)
    {
        printf("error");
        exit(0);
    }
    while((c=fgetc(fp1))!=EOF)
    {
        fputc(c,fp2);
    }

}