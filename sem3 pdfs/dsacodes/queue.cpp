#include<iostream>
using namespace std;
int arr[100],n,front,rear;
void enqueue(int);
void display();
void dequeue();
int main(){
    int ch,ele;
    front=0,rear=0;
    cout<<"enter size of queue ";
    cout<<"\n";
    cin>>n;
    cout<<"enter your choice: \n0.exit\n1.enqueue\n2.dequeue\n3.display\n\n";
    cin>>ch;
   if(ch==0){
       cout<<"exit return status 0";
       exit(0);
   }
    while(ch!=0){
        switch(ch){
            case 0:
            exit(0);
            case 1:
            if(rear==n){
                cout<<"queue overflow ";
                exit(0);
            }
            
            cout<<"enter element to be entered into queue\n";
            cin>>ele;

            enqueue(ele);
           
            cout<<"element "<<ele<<" is entered inserted into queue";
            break;
            case 2:
            if(rear==front)
            {
                cout<<"queue underflow";
                exit(0);
            }
            dequeue();
            break;
            case 3:
            display();
            break;
        }
        
         cout<<"\n enter your choice: \n0.exit\n1.enqueue\n2.dequeue\n3.display\n\n";
         cin>>ch;
    }
}
void enqueue(int ele){
    int i,j;
    i=0;
    while(arr[i]!=0)
    {
        i++;
    }
    arr[i]=ele;
    rear=i+1;
    
    
}
void dequeue(){
    cout<<"element dequeued is"<<arr[front]; 
    front++;
    
    }
void display(){
    int i;
    cout<<"\n elements are:\n";
    for(i=front;i<rear;i++){
        cout<<arr[i]<<"  ";
    }
}
