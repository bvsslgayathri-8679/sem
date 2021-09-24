#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    string s;
    cin>>n;
    int hash1[100]={0};
    int v;
    for(i=0;i<n;i++){
        cin>>v;
        s=to_string(v*v);
        int len=s.length();
        for(i=1;i<len-1;i++){
            s[i-1]=s[i];
        }
            hash1[stoi(s)]=v;
            cout<<hash1[stoi(s)]<<" "<<stoi(s);
        
    }
}