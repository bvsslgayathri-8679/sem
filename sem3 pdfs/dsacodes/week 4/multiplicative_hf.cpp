#include<iostream>
#include<cmath>
#define a 0.619032
using namespace std;
int main(){
    int n,p,ele,mul;
    cout<<"enter size of ht\n";
    cin>>n;
    cout<<"prime num\n ";
    cin>>p;
    
    int arr[1000]={0};
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"enter values.to exit enter 0\n";
        cin>>ele;
        mul=floor(p*ele*a);
        cout<<mul;
        arr[mul]=ele;
    }
    
    for(i=0;i<1000;i++)
    {
        if(arr[i]==0)
        continue;

        cout<<"index"<<i<<" "<<"value"<<arr[i]<<"\n";
    }
}