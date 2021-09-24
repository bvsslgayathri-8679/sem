#include<cstdlib>
#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
}*head=NULL,*temp,*tail=head;

void display();
void insert_beg(int n);
void insert_end(int n);
void insert_after(int,int);
int main(){
    int ch,n,x;
    cout<<"enter yr choice\n1.insert_beginning\t2.insert_end\t8.display\t";
    cin>>ch;
    while(ch!=0)
    {
        switch (ch)
        {
        case 1:
        cout<<"enter element\n";
        cin>>n;
            insert_beg(n);
            break;
        case 2:cout<<"enter element\n";
        cin>>n;
        insert_end(n);
        break;
        case 3:cout<<"enter element\n";
        cin>>n;
        cout<<"enter element\n";
        cin>>x;
        insert_after(n,x);

        case 8:
        display();
        break;
        default:
            break;
        }
        cout<<"enter yr choice\n1.insert_beginning\t2.insert_end\t8.display\t";
    cin>>ch;
    }

}

void insert_beg(int n){
    node *newnode=new node();
    newnode->data=n;
    newnode->next=NULL;
    temp=head;
    if(head==NULL)
    {
        head=newnode;
        tail=head;
    }
    else{
        temp=newnode;
        newnode->next=head;
        cout<<tail->data;
    }
}
void insert_end(int n){
    node *newnode=new node();
    newnode->data=n;
    newnode->next=NULL;
    temp=head;
    
    if(head==NULL)
    {
        head=newnode;
        tail=head;
    }
    else{
        tail->next=newnode;
        tail=newnode;
        cout<<tail->data;
    }
}
void insert_after(int n,int x){
    node *newnode=new node();
    newnode->data=n;
    newnode->next=NULL;
    temp=head;
    
}
void display(){
    temp=head;
    if(temp==NULL)
    {
        cout<<"emplty ll\n";
    }
    do
    {
        cout<<temp->data<<"\t";
        temp=temp->next;
    }while(tail->next!=temp);
}