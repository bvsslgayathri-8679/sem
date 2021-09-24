#include<stdio.h>
#include<stdlib.h>
void main(){
    int n,m,i,j,arr[100][100];
    printf("enter n,m\n");
    scanf("%d %d",&n,&m);
    if(m!=n){
        printf("it is not a square matrix \n");
        exit(0);
    }
    printf("enter values of array\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("upper triangle\n");
    for(i=0;i<n;i++)
    {
        for (j=0; j < m; j++)
        {
            if(i<=j)
            printf(" %d ",arr[i][j]);
            else
            {
                printf("  ");
            }
            
        }
        printf("\n ");
        
    }
    printf("lower triangle\n");
    for(i=0;i<n;i++)
    {
        for (j=0; j < m; j++)
        {
            if(i>=j)
            printf(" %d ",arr[i][j]);
            else
            {
                printf("  ");
            }
            
        }
        printf("\n");
        
    }

}