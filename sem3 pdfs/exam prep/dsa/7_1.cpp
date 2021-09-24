//priority queue
#include<bits/stdc++.h>
using namespace std;
#define max 5
int queue1[max],priority[max],rear=-1,front=-1,n=max;

void insert(int ele,int p)
{
    if(rear==-1)
    {
        front=0;
        queue1[++rear]=ele;
        priority[rear]=p;
        
    }
    else if(rear==n-1 )
    {
        cout<<"overflow\n";
        return ;
    }
    else{
        queue1[++rear]=ele;
        priority[rear]=p;
        
    }
    int i,j;
        for(i=front+1;i<=rear;i++)
        {
            for(j=i-1;j>=front;j--)
            {
                if(priority[j+1]>priority[j])
                {
                    priority[j+1]=priority[j+1]+priority[j];
                    priority[j]=priority[j+1]-priority[j];
                    priority[j+1]=priority[j+1]-priority[j];


                    queue1[j+1]=queue1[j+1]+queue1[j];
                    queue1[j]=queue1[j+1]-queue1[j];
                    queue1[j+1]=queue1[j+1]-queue1[j];
                }

            }
        }
                
    
}
void display()
{
    int i;
    if(front>rear||front==-1)
       cout<<"no element found";
    else{
    for(i=front;i<=rear;i++)
    {
        cout<<"element is "<<queue1[i]<<" and priority is "<<priority[i]<<endl;
    }
    }
}
void deleteele(){
    if(front>rear||front==-1)
    {
        cout<<"underflow\n";
        return ;
    }
    else if( front==rear)
    {
        front=rear=-1;
    }
    cout<<"deleting "<<queue1[front]<<endl;
    queue1[front]=0;
    priority[front]=0;
    front++;
}
int main(){
    int ch,ele,p;
    cout<<"choice\n1.insert\t2.display\t3.delete\n";
    cin>>ch;
    while(ch!=0)
    {
        switch(ch)
        {
            case 0:exit(0);
            case 1:cout<<"element and its priority\n";
            cin>>ele>>p;
            insert(ele,p);
            break;
            case 2:
            display();
            break;
            case 3:
            deleteele();
            break;
            default:
            cout<<"enter correct choice";
        }
        cout<<"choice\n1.insert\t2.display\t3.delete\n";
    cin>>ch;
    }

}