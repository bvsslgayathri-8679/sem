#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main(){
    int n,res;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        if(pow(2,i)==n)
        {
        printf("%d",i);
        exit(0);
        }
        if(pow(2,i)>n){
            printf("%d",i);
            exit(0);
        }
    }
}