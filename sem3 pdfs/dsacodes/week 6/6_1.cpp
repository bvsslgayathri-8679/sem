#include<iostream>
using namespace std;
int main(){
    int n,top=-1;
    cin>>n;
    int sta[n];
    int t=n;
    while(n>0)
    {
        top++;
        sta[top]=n;
        n--; 
        
    }
    int fact=1;
    while(top>=0)
    {
        fact*=sta[top];
        top--;
    }
    cout<<fact<<" is the factorial of "<<t;
}