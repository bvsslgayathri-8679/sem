#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,temp;
    cout<<"enter size of array\n";
    cin>>n;
    int  *arr;
    arr=(int*)malloc(n*sizeof(int));
    cout<<"enter elements\n";
    for(i=0;i<n;i++)
    {
            cin>>arr[i];
    }
    int j=n-1;
    cout<<"elements before reversing are\n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }

    for(i=0;i<n/2;i++)
    {
        temp=arr[i]; 
        arr[i]=arr[j];
        arr[j]=temp;
        j--;      
    }
    cout<<"\nelements in reversed order are\n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }

}