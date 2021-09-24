#include <iostream>
using namespace std;


int partition(int[],int,int);
void quicksort(int[],int,int);


int partition(int arr[],int l,int h)
{
    int p;
    p=arr[l];
    int i,j;
    i=l;
    j=h+1;
    int t;
    while(i<j){
    do{
        i++;
    }while(arr[i]<p && i<=h);

    do{
        j--;
    }while(arr[j]>p &&j>=0);
    if(i<j)
    {

       t=arr[i];
       arr[i]=arr[j];
       arr[j]=t;
    }
    }
    arr[l]=arr[j];
    arr[j]=p;
    return j;
}
void quicksort(int arr[],int l,int h){
    int j;
    if(l<h)
    {
        
        j=partition(arr,l,h);
        quicksort(arr,l,j-1);
        quicksort(arr,j+1,h);
    }
    
}
int main()
{
    int arr[100],n;
    int i,j;
    cout<<"enter sixe of array";
    cin>>n;
    cout<<"enter elemnets";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    cout<<"elements after sorting are";
    
    for(j=0;j<n;j++)
    cout<<arr[j]<<" ";
}