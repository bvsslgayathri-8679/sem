#include<stdio.h>
int fibb(int);
void main(){
    int n,i=0;
    printf("enter number\n");
    scanf("%d",&n);
    while(i<n){
    int res=fibb(1);
    printf("%d ",res);
    i++;
    }
}

int fibb(int n){
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    {
        return fibb(n-1)+fibb(n-2);
    }
    
}