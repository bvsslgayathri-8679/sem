#include<iostream>
using namespace std;
int main(){
    int n,ele,div,i;
    cout<<"enter size of hf\n";
    cin>>n;
    cout<<"enter values.to exit enter 0\n";
    cin>>ele;
    int arr[1000]={0};
    
    for(i=0;i<n-1;i++)
    {
        div=ele%n;
        if(div<n)
        arr[div]=ele;
        cout<<"enter values.to exit enter 0\n";
        cin>>ele;
    }
    
    for(i=0;i<1000;i++)
    {
        if(arr[i]!=0)
        cout<<arr[i]<<"\t";
    }
}