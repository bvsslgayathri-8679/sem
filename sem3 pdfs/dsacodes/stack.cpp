#include<iostream>
using namespace std;
int isfull();
int isempty();
void push(int);
void pop();
void peak();
void show();
int n;
int top,arr[1000];
int main()
{	
    
    int i,j,ch;
    top=-1;
    cout<<"enter size of stack  ";
    cin>>n;
    cout<<"enter a choice \n 0.exit \n 1.push \n 2.pop \n 3.peak \n 4.show\n\n";
    cin>>ch;
    if(ch==0)
    {
        cout<<"exit return status 0";
        exit(0);
    }
    while(ch!=0)
    {
        switch(ch){
            case 0:
            cout<<"exit return status 0\n";
            exit(0);
            case 1:
            if(!isfull())
            {
                int ele;
                cout<<"enter element to be pushed\n"; 
                cin>>ele;
                push(ele);

            }
            else{
                cout<<"stack is full ! \nelement cant be pushed\n";
                show();
                exit(0);
            }
            break;
            case 2:
            if(!isempty())
            {
                pop();
                
            }
            else{
                cout<<"stack is empty ! element cant be popped \n";
                
                exit(0);
            }
            break;
            case 3:
            peak();
            break;
            case 4:
            show();
            break;
            default:
            cout<<"enter correct choice\n";
            break;


        }
        cout<<"enter a choice \n 0.exit \n 1.push \n 2.pop \n 3.peak\n 4.show\n\n";
        cin>>ch;
    }
}
int isfull()
{
    if(top>=n-1){
        return 1;
    }
    else
    {
        return 0;
    }
    
}
int isempty()
{
    if(top<=-1){
        return 1;
    }
    else
    {
        return 0;
    }
    
}
void push(int ele){
    top++;
    arr[top]=ele;
    cout<<"element "<<ele<<" is pushed\n";
    

}
void pop(){
    cout<<" element popped is "<<arr[top]<<endl;
    top--;
    
    
}
void peak(){
    cout<<"element at top is "<<arr[top]<<endl;
}
void show(){
    int i;
    cout<<"elements are \n";
    for(i=0;i<=top;i++)
    {
        cout<<arr[i]<<endl;
    }
}
