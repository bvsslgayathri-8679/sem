#include<iostream>
using namespace std;
void partition(int[100],int,int);
void merge(int[100],int,int,int);
int main()
{
    int arr[100];
    int n,j,z;
    cout<<"enter number of elements in array";
    cin>>n;
    cout<<"enter elements";
    for(j=0;j<n;j++)
    {
    cin>>arr[j];
    }
    partition(arr,0,n-1);
    
    cout<<"sorted array is ";
     
    for(j=0;j<n;j++)
        cout<<arr[j]<<" ";
     

}
void partition(int arr[],int l,int h)
{
    int m;
    if(l<h)
    {
    m=(l+h)/2;
    partition(arr,l,m);
    partition(arr,m+1,h);
    merge(arr,l,m,h);
    }
}

void merge(int arr[],int l,int m,int h)
{
    int i,j,k,arr1[100];
     i=l;
     j=m+1;
     k=l;
     while(i<=m&&j<=h)
     {
         if(arr[i]<arr[j])
         {
             arr1[k]=arr[i];
             k++;
             i++;
         }
         else{
             arr1[k]=arr[j];
             k++;
             j++;

         }
     }
    if(i>m){
        while(j<=h)
        {
            arr1[k]=arr[j];
            j++;
            k++;
        }

    }
    else{
        while(i<=m)
        {
            arr1[k]=arr[i];
            i++;
            k++;

        }
    }
     
     
     for(i=l;i<k;i++){
         arr[i]=arr1[i];
     }
    

}

