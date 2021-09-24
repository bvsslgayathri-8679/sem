#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ch,i,p;
    cout<<"no of hash keys\n";
    cin>>ch;
    cout<<"size of hash table\n";
    cin>>n;
    int arr[n]={0};
    for(i=0;i<ch;i++)
    {
        cout<<"enter element \nto exit enter 0\n";
        cin>>p;
    }
    for(i=0;i<ch;i++)
    {
        int d=p%n;
        if(d<n)
        arr[i]=p;
        
    }

    for(i=0;i<n;i++)
    {
        if(arr[i]!=0)
        cout<<arr[i]<<" ";
        else
        cout<<" -- ";
    }

}