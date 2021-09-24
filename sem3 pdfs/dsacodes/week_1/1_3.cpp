#include<iostream>
using namespace std;
int gcd(int n,int m)
{
    
    if(m==0)
    {
        return n;
    }
    else{
        return gcd(m,n%m);
        
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    if(n<m)
    {
        n=n+m;
        m=n-m;
        n=n-m;
    }
    int res=gcd(n,m);
    cout<<"gcd of "<<n<<" and "<<m<<" is "<<res;

}