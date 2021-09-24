#include<stdio.h>
void main(){
    int s,i,flag=0;
    int arr[100];
    int n;
    printf("enter size of array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter search element\n");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(arr[i]==s)
        {
            printf("elemrnt %d found at index %d",s,i);
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("element not found");

    }
}