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
    int tra[100][100];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            tra[i][j]=arr[j][i];
        }
    }
    int flag=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(arr[i][j]==tra[i][j])
            continue;
            else{
                flag=0;
                break;
            }
        }
    }
    if(flag==1)
    printf("symmetric\n");
    else
    {
        printf("not symmetric");

    }
    
}