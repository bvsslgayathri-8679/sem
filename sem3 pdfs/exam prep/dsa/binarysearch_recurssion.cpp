#include<iostream>
using namespace std;

int BSearch(int tree[], int l, int h, int ele)
{
    int mid = (l+h)/2;
    if (ele==tree[mid])
    {
        return mid;
    }
    else if (ele < tree[mid])
    {
        h = mid-1;
        BSearch(tree, l, h, ele);
    }
    else if (ele > tree[mid])
    {
        l = mid+1;
        BSearch(tree, l, h, ele);
    } 
    else
    {
        return -1;
    }
    
};

int main()
{
    cout<<"Enter 10 elements in ascending order\n";
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the search element\n";
    int x;
    cin>>x;

    int low=0, high;
    high =  sizeof(a)/sizeof(a[1]);
    
    if (BSearch(a, low, high, x)==-1)
    {
        cout<<"Element not found";
    }
    else
    {
        cout<<"Element found @ index "<<BSearch(a, low, high, x);
    }
    return 0;
}