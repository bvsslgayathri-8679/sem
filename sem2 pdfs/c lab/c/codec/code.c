#include <stdio.h>

int main() {
	//code
	int n;
	int arr[100]={3,5,7,8,54,65,45,34,23};
	int r[100]={0};
	int i,j,count=0;
	int k = sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<k;i++)
	{
	    for(j=i;j<k;j++)
	    {
	        if(j%i==0)
	        {
	           r[j]+=1;
	           
	        }
	    }
	}
	for(int p=0;p<k;p++)
	{
	    if(r[p]==0)
	    count++;
	}
	printf("%d",count);
	return 0;
}