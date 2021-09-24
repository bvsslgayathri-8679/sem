#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,n,size;
    cin>>n;
    int arr[n];
    int hash1[100]={0};
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        if(hash1[arr[i]%100]!=0)
        {
            cout<<"collision occured\n";
        }
        else{
            hash1[arr[i]%100]=arr[i];
            cout<<"element is placed at loc "<<arr[i]%100 <<" and value is "<<hash1[arr[i]%100]<<endl;
        }
    }
    
    
}
