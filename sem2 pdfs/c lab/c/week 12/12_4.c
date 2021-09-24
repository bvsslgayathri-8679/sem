#include<stdio.h>
#include<stdlib.h>

void main(int argc,char **argv){
    FILE *fptr;
    int n;
    char ch;
    if(argc<3)
    {
        printf("insufficient arguments\n");
        exit(0);
    }
    
    fptr=fopen(argv[1],"r");
    if(fptr==NULL)
    {
        printf("cant open file\n");
        exit(0);
    }
    n=atoi(argv[2]);
    fseek(fptr,-n,SEEK_END);
    
    
    while((ch=fgetc(fptr))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(fptr);
}