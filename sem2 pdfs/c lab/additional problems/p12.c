#include<stdio.h>
void main(){
    int n,i;
    scanf("%d",&n);
    int arr[100];
    for (i = 0; i < n; i++)
    {
        /* code */
        scanf("%d",&arr[i]);
    
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            arr[i]=0;
        }
        else if(arr[i]==0)
        arr[i]=1;

    }
    printf("1's comp is\n");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    int c=1;
    
    for(i=n-1;i>=0;i--)
    {
        
        if(c==0 && arr[i]==0){
        arr[i]=0;
        c=0;
        
        }
        if(c==0 && arr[i]==1)
        {
            arr[i]=1;
            c=0;
            
        }
        
        if(c==1 && arr[i]==0)
            {
                arr[i]=1;
                c=0;
            
            }
        if(c==1 && arr[i]==1)
            {
                arr[i]=0;
                c=1;
                
            
            }
        
    }
    printf("2's comp\n");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }

}