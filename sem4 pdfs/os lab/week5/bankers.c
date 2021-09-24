#include<stdio.h>
void main()
{
    int n,r,i,j,k,y=0,m=0;
    printf("enter the no.of processes : ");
    scanf("%d",&n);
    printf("enter the no.of resources : ");
    scanf("%d",&r);
    int allocation[n][r],maximum[n][r],available[r],need_matrix[n][r],f1[n],sequence[n];
    printf("enter allocation matrix : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<r;j++)
           scanf("%d",&allocation[i][j]);
    }
    printf("enter max matrix : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<r;j++)
           scanf("%d",&maximum[i][j]);
    }
    printf("enter available : \n");
    for(i=0;i<r;i++)
       scanf("%d",&available[i]);
    for(k=0;k<n;k++)
       f1[k]=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<r;j++)
           need_matrix[i][j] = maximum[i][j] - allocation[i][j];
    }
    for(k=0;k<n;k++)
    {
        for(i=0;i<n;i++)
        {
            if(f1[i]==0)
            {
                int flag = 0;
                for(j=0;j<r;j++)
                {
                    if(need_matrix[i][j] > available[j])
                    {
                        flag = 1;
                        break;
                    }
                }
                if(flag == 0)
                {
                    sequence[m++]=i;
                    for(y=0;y<r;y++)
                        available[y] += allocation[i][y];
                    f1[i]=1;
                }
            }
        }
    }
    printf("The safe sequence is < ");
    for(i=0;i<n-1;i++)
       printf(" P%d ,",sequence[i]);
    printf(" P%d  >\n",sequence[n-1]);
}



/*
5 
3
0 1 0
2 0 0
3 0 2
2 1 1
0 0 2
7 5 3
3 2 2
9 0 2
4 2 2
5 3 3
3 2 2
*/