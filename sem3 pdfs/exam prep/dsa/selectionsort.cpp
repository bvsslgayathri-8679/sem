#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,n,li;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n-1;i++)
    {
        int min=arr[i];
        li=1;
        for(j=i+1;j<n;j++)
        {
            if(min>arr[j])
            {
                min=arr[j];
                li=j;
            }

        }
        int temp;
        temp=arr[i];
        arr[i]=arr[li];
        arr[li]=temp;
    }

    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }


}