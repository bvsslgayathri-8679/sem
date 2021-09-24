#include<stdio.h>
void main(){
    int i,j,k,r=1;
    for(i=5;i>=1;i--)
    {
        for(k=1;k<=r;k++)
        {
            printf(" ");

        }
        for(j=i;j>=1;j--)
        {
            printf("%d",j);

        }
        printf("\n");
        r+=1;
    }
}