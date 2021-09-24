#include<stdio.h>
int n1,m1,n2,m2,i,j,ch;
int a[10][10],b[10][10];
void add();
void mul();
void transpose();
int main(){
    
    printf("enter sizes of array1 n1 and m1");
    scanf("%d %d",&n1,&m1);
    printf("enter elements");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<m1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter sizes of array2 n2 and m2");
    scanf("%d %d",&n2,&m2);
    printf("enter elements");
    for(i=0;i<n2;i++)
    {
        for(j=0;j<m2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("enter choice \n 1.add \n 2.mul\n 3.transpose\n");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        if(n1==n2 && m1==m2)
        {
            add();
        }
        else
        {
            printf("cant add\n");
        }
        
        break;
    case 2:
        if(m1==n2)
        {
            mul();

        }
        else
        {
            printf("cant multiply\n");
        }
        
        break;
    case 3:
            transpose();
            break;
    default:
        break;
    }

}

void add(){
    int i,j;
    int res[10][10];
    for(i=0;i<n1;i++)
    {
        for(j=0;j<m1;j++){
            res[i][j]=a[i][j]+b[i][j];
            
        }

    }
    printf("sum of 2 arrays is \n");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<m1;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");

    }
}

void mul(){
    int i,j,k;
    int res[10][10];
    for(i=0;i<n1;i++)                         
    {
        
        for(j=0;j<m1;j++)
        {
            res[i][j]=0;
            for(k=0;k<m2;k++)
            {
                res[i][j]+=a[i][k]*b[k][j];
            }

        }
    }
    printf("mul array is \n");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<m2;j++)
        {
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
}

void transpose()
{
    int i,j,res[10][10];
    printf("transpose\n");
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
            res[i][j]=a[j][i];
           
        }
    }
    for(i=0;i<n1;i++)
    {
        for(j=0;j<m1;j++)
        {
           
           printf("%d ",res[i][j]);
        }
        printf("\n");

    }

     
    
    
}




