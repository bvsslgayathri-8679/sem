#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node* next;

};
struct node *head=NULL;
node* temp;
void insert(int n){
    
    node* newnode=new node();

    newnode->data=n;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=temp=newnode;
        cout<<"done ";
    }
    else{
        while(temp->next!=NULL)
        {

            temp=temp->next;
        }
        temp->next=newnode;
        cout<<"done ";
    }
    

}
void reverse()
{
    struct node *pre,*curr,*nextnode;
    pre=NULL;
    curr=nextnode=head;
    while(nextnode!=NULL)
    {
    nextnode=nextnode->next;
    curr->next=pre;
    pre=curr;
    curr=nextnode;
    
    }
    
    head=pre;

}
void display(){
    
    temp=head;
    if(head==0)
    {
        cout<<"empty ll"<<endl;

    }
    else{
        while(temp!=NULL)
        {
            cout<<temp->data<<endl;
            temp=temp->next;
        }
        
    }
}
int main(){
    cout<<"input numbers until u enter 0 "<<endl;
    int n;
    cin>>n;
    while(n!=0)
    {
        
        insert(n);
        cin>>n;
    }
    cout<<"before revesing "<<endl;
    display();
    reverse();
    cout<<"after reversing "<<endl;
    display();
}