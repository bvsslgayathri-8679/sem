#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100],n,i,j,t;
    cout<<"enter number of elements in the array\n";
    cin>>n;
    cout<<"enter elements \n";
    for(i=0;i<n;i++)
        cin>>arr[i];
    cout<<"selection sort";
    for(i=0;i<n;i++)
    {
        int min=arr[i];
        int li;
        for(j=i+1;j<n-1;j++)
        {
            if(arr[j]<min)
            {
                min=arr[j];
                li=j;
            }

        
        }
        if(min!=arr[i]){
        int temp;
        temp=arr[i];
        arr[i]=arr[li];
        arr[li]=temp;
        }
    }
    cout<<"sorted array\n";
    for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
