#include<bits/stdc++.h>
using namespace std;
int main(){
	int sear,n,arr[100],i;
	cout<<"enter size of array";
	cin>>n;
	cout<<"enter elemnets";
	for(i=0;i<n;i++)
		cin>>arr[i];
	cout<<"enter searches element";
	cin>>sear;
	for(i=0;i<n;i++)
	{
		if(arr[i]==sear)
		{
			cout<<"Searched element "<<sear<<" is found at index "<<i;
			break;
		}
	}
	if(i==n)
		cout<<"Search element not found";
}

