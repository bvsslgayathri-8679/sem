#include<stdlib.h>
#include<stdio.h>
int main(int argc,char * argv[]){
    if(argc<3)
    {
        printf("insufficient args");
        exit(0);

    }
    int a,b;
    a=atoi(argv[1]);
    b=atoi(argv[2]);
    printf("%d",a+b);

}