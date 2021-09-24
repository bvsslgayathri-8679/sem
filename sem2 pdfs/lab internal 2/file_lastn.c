#include<stdio.h>
#include<stdlib.h>
void main(int argc,char *argv[]){
    FILE *fptr;
    if(argc<3)
    {
        printf("insufficient data");
        exit(0);
        
    }
    fptr=fopen(argv[1],"r");
    if(fptr==NULL)
    {
        printf("Cant open file\n");
        exit(0);
    }
    char ch;
    int n=atoi(argv[2]);
    fseek(fptr,-n,SEEK_END);
    while((ch=fgetc(fptr))!=EOF)
    printf("%c",ch);
    fclose(fptr);
}