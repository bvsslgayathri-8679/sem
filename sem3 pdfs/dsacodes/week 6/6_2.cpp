#include<iostream>
#include<stack>
#include<string.h>
using namespace std;
int main(){
    stack <int> stack1;
    char s[100];
    cout<<"enter the expression";
    cin>>s;
    int i;
    int n1,n2,a,s1;
    for(i=0;i<strlen(s);i++)
    {
        a=s[i];
        if(isdigit(a))
        {   a=s[i]-48;
           stack1.push(a);
           
        }
        else{
            n1=stack1.top();
            stack1.pop();
            n2=stack1.top();
            stack1.pop();
                
            switch(a)
            {
                case '+':
                s1=n1+n2;
                stack1.push(s1);
               
                break;
                case '-':
                s1=n2-n1;
                stack1.push(s1);
                
                break;
                case '*':
                s1=n1*n2;
                stack1.push(s1);
                
                break;
                case '/':
                s1=n2/n1;
                stack1.push(s1);
                
                break;
                default:
                cout<<"something went wrong\n";
                
            }
        }
        
    }
    cout<<stack1.top()<<" is the evaluated output";
}