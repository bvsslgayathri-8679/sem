//multiplicative hash funtion


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ch,i,ind,k;
    cout<<"no of hash keys\n";
    cin>>ch;
    cout<<"size of hash table\n";
    cin>>n;
    int arr[n]={0};
    float a=0.6183;
    int p;
    cout<<"enter p\n";
    cin>>p;
    for(i=0;i<ch;i++){
        cout<<"enter number \n";
        cin>>k;
        ind=floor(p*(a*k));
        if(ind<n){
            arr[ind]=k;
        }

    }
    for(i=0;i<n;i++)
    {
        if(arr[i]!=0)
        cout<<arr[i]<<" ";
        else
        cout<<" -- ";
    }



}

