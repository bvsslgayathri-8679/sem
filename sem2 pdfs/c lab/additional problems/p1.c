#include<stdio.h>
int factorial(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    return f;
}
int factorial_rec(int n)
{
    if(n==0)
    return 1;
    else if(n==1)
    return 1;
    else
    {
        return n*factorial_rec(n-1);
    }
       
}
void main(){
    int n;
    scanf("%d",&n);
    printf("%d ",factorial(n));
    printf("%d",factorial_rec(n));
}