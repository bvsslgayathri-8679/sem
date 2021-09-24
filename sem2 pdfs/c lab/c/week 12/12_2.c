#include<stdio.h>
#include<stdlib.h>

void main(){
    FILE *fptr1,*fptr2;
    char ch;
    fptr1=fopen("file1.txt","r");
    fptr2=fopen("file2.txt","w");
    if(fptr1==NULL||fptr2==NULL)
    {
        printf("cant open the files!\n");
        exit(0);

    }
    
    while((ch=fgetc(fptr1))!=EOF)
    {
        fputc(ch,fptr2);
        
    }
    fclose(fptr1);
    fclose(fptr2);
}