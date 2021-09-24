#include<stdlib.h>
#include<stdio.h>
void main(){
    int n,m,i,j,arr[100][100];
    int rs=0,cs=0,ds1=0,ds2=0;
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
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            rs+=arr[i][j];
            if(i==j)
            {
                ds1+=arr[i][j];
            }
            if(i+j==n-1)
            ds2+=arr[i][j];
            
        }
        printf("sum of elements od row %d ids %d\n",i+1,rs);
        
        rs=0;
    }
    printf("sum of elements diagonal 1 is %d\n",ds1);
    printf("sum of elements diagonal 2 is %d\n",ds2);
    for(j=0;j<m;j++)
    {
        for(i=0;i<n;i++)
        {
            cs+=arr[i][j];
            
        }
        printf("sum of elements od column %d ids %d\n",j+1,cs);
        cs=0;
    }
    
}