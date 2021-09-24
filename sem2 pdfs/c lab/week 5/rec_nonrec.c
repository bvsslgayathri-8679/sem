#include<stdio.h>
#include "header1.h"

void main(){
    int n,res;
    printf("enter number");
    scanf("%d",&n);
    int ch;
    printf("enter choice 1.factorial 2.factorial reccursion 3.prime");
    fflush(stdin);
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        printf("%d",factorial(n));
        break;
    case 2:
        printf("%d",factorial_rec(n));
        break;
    case 3:
    res=prime(n);
    if(res==1)
    {
        printf("%d is a prime num",n);

    }
    else{
        printf("%d is not a prime number",n);
    }
    break;
    default:
        break;
    }

}