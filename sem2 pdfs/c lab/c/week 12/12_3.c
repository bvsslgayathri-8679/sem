#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
void main(){
    int cha=0,w=0,li=0;
    char ch;
    FILE *fptr;
    fptr=fopen("file1.txt","r");
    if(fptr==NULL)
    {
        printf("cant open file\n");
        exit(0);
    }
    
    while((ch=fgetc(fptr))!=EOF)
    {
        if(ch=='\n')
        li++;
        if(ch=='\t'||ch==' '||ch=='\n')
        w++;
        cha++;

    }
    if(cha>0)
    {
        w++;
        li++;
    }
    printf("%d no of characters\n",cha);
    printf("%d no of words\n",w);
    printf("%d no of lines\n",li);
    fclose(fptr);
}