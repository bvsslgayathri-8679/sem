#include<stdio.h>
#include<stdlib.h>
int main(int argc,char * argv[]){
    if(argc<3)
    {
        printf("insufficient args");
        exit(0);

    }
    FILE *fptr,*fptr2;
    fptr=fopen(argv[1],"r");
    fptr2=fopen(argv[2],"w");
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