#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,i,ele,mul,count,d;
    int arr[10000]={0};
    cout<<"enter values.to exit enter 0\n";
    cin>>ele;
    while(ele)
    {
        count=0;
        
        int temp=ele;
        while(ele>0)
        {
            d=ele%100;
            count+=d;
            ele/=100;
        }
        arr[count]=temp;
        cout<<"enter values.to exit enter 0\n";
        cin>>ele;

    }
    for(i=0;i<10000;i++)
    {
        if(arr[i]==0)
        continue;

        cout<<"index"<<i<<" "<<"value"<<arr[i]<<"\n";
    }


}