#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *head=NULL,*newnode,*head1;
void begininsert();
void endinsert();
void afterinsert();
void beforeinsert();
void begindelete();
void enddelete();
void deletenode();
void display();
int main()
{
    int ch;
while(1)
{
cout<<"\nLIST:\n1)insert at the beginning \n2)insert at the ending \n3)insert after a given node \n4)insert before a given node \n5)delete front node \n6)delete end node \n7)delete given node  \n8)display \n9)exit\n"<<endl;
cin>>ch;
switch(ch)
{
    case 1: begininsert();
            break;
    case 2: endinsert();
            break;
    case 3: afterinsert();
            break;
    case 4: beforeinsert();
            break;
    case 5: begindelete();
            break;
    case 6: enddelete();
            break;
    case 7: deletenode();
            break;
    case 8: display();
            break;
    case 9: exit(0);
}
}
return 0;
}
void begininsert()
{
node* newnode=new node();
cout<<"\nenter element to be inserted"<<endl;
cin>>newnode->data;
newnode->prev=NULL;
newnode->next=NULL;
if(head==NULL)
{
    head=head1=newnode;
}
else
{
newnode->next=head;
head->prev=newnode;
head=newnode;
}
}
void endinsert()
{
node* newnode=new node();
cout<<"\nenter element to be inserted"<<endl;
cin>>newnode->data;
newnode->next=NULL;
newnode->prev=NULL;
if(head==NULL)
{
    head=head1=newnode;
}
else
{
head1=head;
while(head1->next!=NULL)
{
    head1=head1->next;
}
head1->next=newnode;
newnode->prev=head1;
}
}
void afterinsert()
{
int num;
node* newnode=new node;
cout<<"\nenter element to be inserted"<<endl;
cin>>newnode->data;
cout<<"\nafter which element"<<endl;
cin>>num;
newnode->next=NULL;
newnode->prev=NULL;
if(head==NULL)
{
    cout<<"invalid"<<endl;
}
else
{
head1=head;
while(head1->data!=num)
{
head1=head1->next;
}
newnode->next=head1->next;
newnode->prev=head1;
head1->next=newnode;
if(newnode->next!=NULL)
newnode->next->prev=newnode;
}
}
void beforeinsert()
{
int num;
node* newnode=new node();
cout<<"\nenter element to be inserted"<<endl;
cin>>newnode->data;
newnode->next=NULL;
newnode->prev=NULL;
cout<<"\nbefore which element"<<endl;
cin>>num;
if(head==NULL)
{
    cout<<"invalid"<<endl;
}
else
{
head1=head;
while(head1->data!=num)
{
head1=head1->next;
}
newnode->next=head1;
newnode->prev=head1->next;
head1->prev->next=newnode;
head1->prev=newnode;
}
}
void display()
{
    if(head==NULL)
    {
        cout<<"\nnothing to display";
    }
    else
    {
     head1=head;
     while(head1!=NULL)
     {
       cout<<head1->data<<endl;
       head1=head1->next;
     }
    }
}
void begindelete()
{
    head1=head;
    head=head->next;
    if(head!=NULL)
    head->prev=NULL;
    free(head1);
}
void enddelete()
{
    head1=head;
    if(head1->next!=NULL)
    {
    while(head1->next!=NULL)
    {
        head1=head1->next;
    }
    head1->prev->next=NULL;
    }
    else
    head=NULL;
    free(head1);
}
void deletenode()
{
    int num;
    head1=head;
    cout<<"\nenter note to be deleted"<<endl;
    cin>>num;
    while(head1->data!=num)
    {
        head1=head1->next;
        if(head1==NULL)        
       {
        cout<<"\nelement not found";
        goto x;
       }
    }
    if(head1->next!=NULL)
    {
    head1->next->prev=head1->prev;
    }
    if(head1->prev!=NULL)
    {
    head1->prev->next=head1->next;
    }
    else
    {
        head=head1->next;
    }
    x:free(head1);
}