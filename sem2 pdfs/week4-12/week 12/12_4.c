#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc,int *argv[]){
    FILE *fp1;
    char c;
    fp1=fopen(argv[1],"r");
    if(fp1==NULL)
    {
        printf("error");
        exit(0);
    }
    if(argc<=2)
    { 
        printf("insufficient arg \n");
        exit(0);
    }
    
    int n=atoi(argv[2]);
    fseek(fp1,-n,SEEK_END);
    while ((c=getc(fp1))!=EOF)
    {
        printf("%c",c);
    }
    
}