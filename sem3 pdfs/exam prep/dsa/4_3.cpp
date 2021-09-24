//digit folding
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ch,i,p,temp,sum,k,d;
    cout<<"no of hash keys\n";
    cin>>ch;
    cout<<"size of hash table\n";
    cin>>n;
    int arr[n]={0};
    for(i=0;i<ch;i++)
    {
        cout<<"enter number\n";
        cin>>k;
        temp=k;
        sum=0;
        while(temp>0){
            d=temp%10;
            sum+=d;
            temp=temp/10;
        }
        if(sum<n)
        arr[sum]=k;
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]!=0)
        cout<<arr[i]<<" ";
        else
        cout<<" -- ";
    }
}


