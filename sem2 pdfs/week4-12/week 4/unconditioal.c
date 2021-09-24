#include<stdio.h>
void main(){
    int n,a,i;
    scanf("%d %d",&n,&a);
    printf("usage od continue\n");
    for(i=1;i<=n;i++)
    {
        if(i==a){
            continue;
        }
        printf("%d ",i);
    }
    printf("\n usage of break\n");
    for(i=1;i<=n;i++)
    {
        if(i==a){
            break;

        }
        printf("%d",i);
    }
    printf("\nusage of goto\n");
    for(i=1;i<=n;i++)
{
    if(i==a)
    goto gayathri;
    printf("%d",i);
}
gayathri:printf("loop break");
}