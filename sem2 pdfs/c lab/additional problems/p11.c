#include<stdio.h>
int lcm(int a,int b){
    int res;
    for(int i=2;i<=a*b;i++)
    {
        if(i%a==0 && i%b==0)
        {
            res=i;
            printf("%d\n",res);
            break;
        }
    }
    
    return res;
}
void main(){
    int n,arr[100],i,l=1;
    printf("emter a number\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    for(i=0;i<n;i++)
    { 
        l=lcm(l,i); 
        printf("\n%d %d\n",l,i); 
    } 
    printf("lcm is %d",l); 
} 