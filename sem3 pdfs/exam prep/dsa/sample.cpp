#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace  std;

int main()
{
    stack <int> s;
    char a[100]; int p;
    cin>>a;
    int x, y,result;

    for (int i = 0; a[i]!='\0'; i++)
    {
        if (a[i]==' ')
        {
           continue;
        }
        
        else if (isdigit(a[i])){
            int p =a[i]-48;
            s.push(p);
        }
        else{
             x = s.top();
             s.pop();
             y = s.top();
             s.pop();
             switch (a[i])
             {
                case '+':  result = y+x;
                    s.push(result);
                    cout<<s.top()<<'\n';
                    break;
                case '-':  result = y-x;
                    s.push(result);
                    cout<<s.top()<<'\n';
                    break;
                case '*':  result = y*x;
                cout<<s.top()<<'\n';
                    s.push(result);
                    break;
                case '/':  result = y/x;
                    cout<<s.top()<<'\n';
                    s.push(result);
                    break;
                /*
                case '%':  result = y%x;
                    s.push(result);
                    break;
                case '^':  result = pow(y,x);
                    s.push(result);
                    break;
                */
                default: cout<<"Invalid exp\n";
                    break;
              } 
            }
    }
    cout<<"Result: "<<s.top();
}