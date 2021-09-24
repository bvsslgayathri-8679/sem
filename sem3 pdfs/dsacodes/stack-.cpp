#include<iostream>
using namespace std;
int main(){
	int arr[10],ch,n,i,j;
	cout<<"enter your choice except 0 where \n1.push\n2.pop\n";

	cin>>ch;
	int top=-1;
	while(ch!=0)
	{

		switch(ch){
			case 1:
			if(top>=10){

				cout<<"stack overflow";
				goto label;
			}
			else 
			{
				cout<<"enter element to be pushes\n";
			cin>>n;
				top++;
				arr[top]=n;
			}
			
			break;
			case 2:
			if(top<=-1){
				cout<<"stack underflow";
				goto label;
			}
			if(top>-1)
			{
				cout<<"popping element";
				arr[top]=0;
				top--;
			}
		}
		label:cout<<"\nchoice";
		cin>>ch;
	}
	i=0;
	while(i<=top)
	{
		cout<<arr[i]<<" ";
		i++;
	}
}