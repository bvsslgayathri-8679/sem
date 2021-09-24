#include<stdio.h>
#include<stdlib.h>
void main(){
    int n,m,i,j,arr[100][100],res[100][100];
    printf("enter n,m\n");
    scanf("%d %d",&n,&m);
   
    printf("enter values of array\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int k=0;
    for(i=0;i<n;i++)
    {
        for(j=m-1;j>=0;j--)
        {
            res[i][j]=arr[j][i];
            
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        printf("%d ",res[i][j]);
        printf("\n");

    }
}