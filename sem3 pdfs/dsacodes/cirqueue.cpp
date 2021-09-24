#include<iostream>
using namespace std;
int arr[100],n,rear,front;
void enqueue(int);

int main()
{
    
    int ch,ele;
    

    cout<<"enter size of queue \n";
    cin>>n;
    rear=0;
    front=0;
    cout<<"\nenter your choice: \n0.exit\n1.enqueue\n2.dequeue\n3.display\n\n";
    cin>>ch;
    while(ch!=0)
    {
        switch (ch)
        {
        case 0: 
        exit(0);
        case 1:
        cout<<"enter element to be entered into circular queue \n";
        cin>>ele;
        enqueue(ele);

        break;
        
        default:
            break;
        }
    }
}
void enqueue(int ele){
    int i,j;

    while(arr[i]!=0)
    {
        i++;

    }   
    arr[i]=ele;
    rear=i;
    if(rear>n){
        
    }

}