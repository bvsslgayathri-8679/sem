#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,b,e,n,sear,arr[100];
	cout<<"enter number of elements";
	cin>>n;
	cout<<"enter elements";
	int i;
	for(i=0;i<n;i++)
		cin>>arr[i];
	cout<<"enter searched element";
	cin>>sear;
	b=0;
	e=n-1;
	
	while(b<=e)
	{

		m=(b+e)/2;
		if(arr[m]==sear)
		{
	
			cout<<"element "<<sear<<" is found at "<<m<<"th index";
			break;
		}
		else if(arr[m]>sear)
		{
			
			e=m-1;
		}
		else if(arr[m]<sear)
		{
			
			b=m+1;
		}
	
		
		
	}
	if(b>e)
	{
		
		cout<<"element not found";
	}
}


