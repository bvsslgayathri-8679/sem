#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,*hash,ch=1,i=0,len;
    string str1,str;
    hash=(int *)calloc(100,sizeof(int));
    while(ch)
    {
        cout<<"enter element"<<endl;
        cin>>n;
        str=to_string(n*n);
        len=str.length();
        for(i=1;i<len-1;i++)
        {
            str1[i-1]=str[i];
        }
        if(hash[stoi(str1)]==0)
        {
           hash[stoi(str1)]=n;
           cout<<n<<"is inserted at"<<stoi(str1)<<" index position"<<endl;
        }
        else
        {
          cout<<"collision occured"<<endl;
        }
        cout<<"enter 0 to exit"<<endl;
        cin>>ch;
       i++;
    }
    return 0;
}