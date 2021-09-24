#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};

node* deletenode(node* node1,int n);
node* insert(node* node1,int n);
node* minimum(node* node1);
void display(node* node1,string,bool);
int main(){
node *root=NULL,*temp;
int ch,n;
cout<<"enter your choice\n";

cin>>ch;

while(ch!=0)
{
    switch(ch)
    {
        case 0: exit(0);
        case 1: 
            cin>>n;
            root=insert(root,n);
            break;

        case 2:
            cin>>n;
            root=deletenode(root,n);
            break;

        case 3:
            display(root," ",true);
            break;
    }
    cout<<"enter your choice\n";

cin>>ch;
}

}


node* insert(node* node1,int n)
{
    if(node1==NULL)
    {
        node* newnode=new node;
        newnode->data=n;
        newnode->left=newnode->right=NULL;
        node1=newnode;
    }
    else if(n>node1->data)
    {
        node1->right=insert(node1->right,n);

    }
    else if(n<node1->data)
    {
        node1->left=insert(node1->left,n);
    }
    return node1;
}

node* minimum(node* node1)
{
    while(node1->left!=NULL && node1!=NULL)
    {
        return minimum(node1->left);
    }
    return node1;
}



node* deletenode(node* node1,int n)
{
    node* temp;
    if(node1==NULL)
    {
        return node1;
    }
    if(n<node1->data)
    {
        node1->left=deletenode(node1->left,n);
    }
    else if(n>node1->data)
    {
        node1->right=deletenode(node1->right,n);
    }
    else if(n==node1->data){
        if(node1->left==NULL && node1->right==NULL)
        {
            node1=NULL;
            free(node1);
        }
        else if(node1->left!=NULL && node1->right==NULL)
        {
            temp=node1;
            node1=temp->left;
            free(temp);
        }
        else if(node1->left==NULL && node1->right!=NULL)
        {
            temp=node1;
            node1=temp->right;
            free(temp);
        }
        else{
            temp=minimum(node1->right);
            node1->data=temp->data;
            node1->right=deletenode(node1->right,temp->data);
        }
        

    }
    return node1;
}


void display(node* node1, string indent, bool last)
{
    if(node1!=NULL)
    {
    cout<<indent;
    if(last)
    {
        cout<<"R---";
        indent+=" ";

    }
    else{
        cout<<"L---";
        indent+='|';
    }
    cout<<node1->data<<endl;
    display(node1->left,indent,false);
    display(node1->right,indent,true);
    }
}