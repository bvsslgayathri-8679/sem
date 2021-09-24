#include<cstdlib>
#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
}*head=NULL,*temp;
void display();
void insert(int);
void delete_node();
int main(){
     int ch,n;
     cout<<"enter 0 if you dont wnat to enter data\nenter your choice\t1.insert\t2.display\t3.delete\n";
     cin>>ch;
     while(ch)
     {
         if(ch==1){
         cout<<"enter data\n";
         cin>>n;
         insert(n);
         }
         else if(ch==2){
             display();
         }
         else if(ch==3)
         {
             delete_node();
         }
         else{
             cout<<"enter correct choice\n";
         }
        cout<<"enter 0 if you dont wnat to enter data\n";
         cin>>ch;
     }

}
void display(){
    node* temp1;
    temp1=head;
     if(temp1==NULL)
     {
         cout<<"empty\n";
     }
     else{
     do{
         cout<<temp1->data<<"\t";
         temp1=temp1->next;
     }while(temp1!=head);
     }
     /*if(temp==NULL)
     {
         cout<<"empty";
     }
     temp=head;
     while(temp->next!=head)
     {
         
             cout<<temp->data<<"\t";
             temp=temp->next;
     }
     cout<<temp->data;*/
}
void insert(int n){
    node* newnode=new node();
         
         newnode->data=n;
         newnode->next=NULL;
         
         if(head==NULL)
         {
             temp=head=newnode;
         }
         else{
             temp->next=newnode;
                temp=newnode; 
         }
         temp->next=head;
         
        
}
void delete_node(){
    node* temp1;
    temp1=head;
    if(temp1==NULL)
    {
        cout<<"no element\n cant delete\n";
    }
    else if(temp1->next==head)
    {
        head=NULL;

    }
    else{
        
        while(temp1->next->next!=head)
        {
            temp1=temp1->next;

        }
        temp1->next=head;
        temp=temp1;
        
    }
    
}