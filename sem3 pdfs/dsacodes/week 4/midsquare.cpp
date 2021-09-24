#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,i,ele,mul,count;
    cout<<"enter size of ht\n";
    cin>>n;
    int arr[10000]={0};
    for(i=0;i<n;i++)
    {
        count=0;
        cout<<"enter values.to exit enter 0\n";
        cin>>ele;
        mul=ele*ele;
        int temp=ele;
        while (ele!=0)
        {
            ele/=10;
            count+=1;
        }
        int p=pow(10,count);
        int res=mul%p;
        cout<<mul<<" "<<res;
        arr[res]=temp;
        
        
    }
    for(i=0;i<10000;i++)
    {
        if(arr[i]==0)
        continue;

        cout<<"index"<<i<<" "<<"value"<<arr[i]<<"\n";
    }
    
}