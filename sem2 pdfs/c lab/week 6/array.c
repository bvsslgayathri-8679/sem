#include<stdio.h>
//cd /mnt/e/'books and pdfs'/'sem2 pdfs'/'c lab'
void main(){
    int n,i;
    int arr[100];
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter elements");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("elements are");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
        
    }
}