#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *arr;
    int n,s=0,i;
    scanf("%d",&n);
    arr=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        s+=arr[i];
    }
    printf("avg is %d ",s/n);
    printf("\n resizing array \nenter your new size \n");
    scanf("%d",&n);
    arr=(int *)realloc(arr,sizeof(int)*n);
    s=0;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        s+=arr[i];
    }
    printf("avg is %d ",s/n);


}