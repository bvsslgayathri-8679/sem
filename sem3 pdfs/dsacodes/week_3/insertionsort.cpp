#include <iostream>
using namespace std;
int main()
{
    int arr[100],n,i,j,l,t,k,r;
    cout<<"enter number of elements";
    cin>>n;
    cout<<"enter elements";
    for(i=0;i<n;i++)
    cin>>arr[i];
    for(i=1;i<n;i++){
        k=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>k)
        {
            arr[j+1]=arr[j];
            j--;

        }
        
        arr[j+1]=k;
    }
    cout<<"insertion sort";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
} 