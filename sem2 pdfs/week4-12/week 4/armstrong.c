#include<stdio.h>

#include<math.h>
void main(){
    int n;
    int p,a,b,d,c=0,r;
    printf("enter a number");
    scanf("%d",&n);
    a=n;
    b=a;
    while(a>0){
        d=a%10;
        c+=1;
        a=a/10;

    }
    while(b>0){
        d=b%10;
        r=pow(d,c);
        p+=r;
        b=b/10;
    }
    if(p==n){
        printf("%d is an armstrong number",n);
        
    }
    else
    {
        printf("%d is not an armstrong number",n);
    }
    
}