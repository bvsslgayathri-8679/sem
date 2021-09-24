#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fptr,*fptr2;
    fptr=fopen("file1.txt","r");
    fptr2=fopen("file2.txt","w");
    if(fptr==NULL||fptr2==NULL)
    {
        printf("cant open the file");
        exit(0);

    }
    char ch;
    while((ch=fgetc(fptr))!=EOF)
    {
        putc(ch,fptr2);
    }
}