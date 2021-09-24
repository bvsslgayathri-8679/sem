#include<stdio.h>
void main(){
    int n,i,arr[100],p=0,neg=0,e=0,od=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }

    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            {
                e+=1;
            }
        if(arr[i]>0){
            p+=1;
            
            if(arr[i]%2!=0)
            {
                od+=1;
            }
        }
        else if(arr[i]<0){
        neg+=1;
        }
        

    }
    printf("%d even\n",e);
    printf("%d odd\n",od);
    printf("%d pos\n",p);
    printf("%d neg\n",neg);
    for(i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            printf("0 is pos or neg");
            break;
        }
    }
}