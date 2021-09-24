#include<stdio.h>
void main(){
    int a,b,i;
    printf("enter range");
    scanf("%d %d",&a,&b);
    if(b>0 && a>b){       
        a=a+b;
        b=a-b;
        a=a-b;
        
    }

    for(i=a+1;i<b;i++)
    {
        if(i%2!=0)
        printf("%d\n",i);

    }
}