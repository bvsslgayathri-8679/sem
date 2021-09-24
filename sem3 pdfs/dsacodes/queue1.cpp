#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"enter size of q";
    cin>>num;
    int arr[10];
    int r,f,p,n,i;
    f=0;r=0;
    
    cout<<"enter urr choce \n1.push\n2.pop\n 3.elements\n";
    int ch;
    cin>>ch;
    while(ch!=0){
    switch(ch){
        case 0:
        break;
        case 1:
        
            if(r>n-1)
            {
                cout<<"queue overflow";
                goto label;
                
            }
            else{
                cout<<"enter element to be pushed";
                cin>>n;
                arr[r]=n;
                r++;
            }
            break;
        case 2:
        if(r==f)
        {
            cout<<"queue underflow";
            goto label;

        }
        else{
           
           f++;
        }
        cout<<"element popped";
        break;
        case 3:
        for(i=f;i<r;i++){
            cout<<arr[i]<<" ";
        }
        
    }
    label:cout<<"choice";
    cin>>ch;
    }
}