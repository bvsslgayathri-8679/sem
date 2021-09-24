#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fptr;
    fptr=fopen("file1.txt","r");
    if(fptr==NULL)
    {
        printf("cant open the file");
        exit(0);

    }
    char ch;
    while((ch=fgetc(fptr))!=EOF)
    {
        putc(ch,stdout);
    }
}