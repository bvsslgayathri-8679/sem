#include<stdio.h>
void lcm(int a,int b)
{
    for(int i=2;i<=a*b;i++)
    {
        if(i%a==0 && i%b==0)
        {
            printf("lcm is %d",i);
            break;
        }
    }
}
void main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        a=a+b;
        b=a-b;
        a=a-b;
    }
    lcm(a,b);

}