#include<stdio.h>
void main(){
    int n,i,c=0;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            c+=1;

        }
        
    }
    if(c==2)
    printf("%d is a prime number\n",n);
    else
    {
        printf("%d is not a prime number\n",n);
    }
    
}