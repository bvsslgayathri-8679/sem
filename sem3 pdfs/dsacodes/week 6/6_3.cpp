#include<iostream>
#include<stack>
using namespace std;
int main(){
    int n,d,top=-1;
    cin>>n;
    stack <int> arr;
    while(n>0){
        top++;
        d=n%2;
        arr.push(d);
        n=n/2;
    }
    while(top!=0)
    {
        cout<<arr.top();
        arr.pop();
    }
}