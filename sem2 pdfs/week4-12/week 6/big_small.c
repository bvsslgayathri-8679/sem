#include<stdio.h>
void main(){
    int n,i,j;
    int arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
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
    printf("smallest is %d \n and largest is %d",arr[0],arr[n-1]);
}