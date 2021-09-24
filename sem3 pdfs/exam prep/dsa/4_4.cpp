//digit folding
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ch,i,p,temp,sum,k,d,ind;
    cout<<"no of hash keys\n";
    cin>>ch;
    cout<<"size of hash table\n";
    cin>>n;
    int arr[n]={0};
    for(i=0;i<ch;i++)
    {
        cout<<"enter number\n";
        cin>>k;
        p=k*k;
        int c=0;
        while(p>0)
        {
            p=p/10;
            c++;
        }   
        c/=2;
        sum=pow(10,c);
        ind=p%sum;
        if(ind<n)
        arr[ind]=k;
    }
    for(i=0;i<10000;i++)
    {
        cout<<arr[i];
        if(arr[i]!=0)
        cout<<arr[i]<<" "<<i <<endl;
        else
        continue;
        
    }
}