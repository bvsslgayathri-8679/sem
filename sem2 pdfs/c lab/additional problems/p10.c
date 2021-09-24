#include<stdio.h>
void main(){
    int n,arr[100];
    printf("enter number of elements\n");
    scanf("%d",&n);
    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                arr[i]=arr[i]+arr[j];
                arr[j]=arr[i]-arr[j];
                arr[i]=arr[i]-arr[j];

            }

        }
        
    }
    printf("sorted list is\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}