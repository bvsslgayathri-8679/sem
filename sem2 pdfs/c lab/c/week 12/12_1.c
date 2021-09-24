#include<stdio.h>
#include<stdlib.h>
void main(){
    char ch;
    FILE *fptr;
    fptr=fopen("file1.txt","r");
    if(fptr==NULL)
    {
        printf("Cant open file\n");
        exit(0);
    }
    
    while((ch=fgetc(fptr))!=EOF)
    {
        printf("%c",ch);
        
    }
    fclose(fptr);
}               
