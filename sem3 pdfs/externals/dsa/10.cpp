#include<bits/stdc++.h>
using namespace std;

struct node{
int data;
node* right;
node* left;
}*temp;


node* insert(node* node1,int n)
{
    if(node1==NULL)
    {
        node1=new node;
        node1->data=n;
        node1->left=node1->right=NULL;
        return node1;
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

void printTree(node *node1, string indent, bool last) 
{
 if (node1 != nullptr) 
 {
 cout << indent;
 if (last) 
 {
 cout << "R----";
 indent += " ";
 } else 
 {
 cout << "L----";
 indent += "| ";
 }
 cout << node1->data << endl;
 printTree(node1->left, indent, false);
 printTree(node1->right, indent, true);
 }
}

node* minimum(node* node2){
    if(node2->left==NULL || node2==NULL)
    return node2;
    while(node2->left!=NULL && node2!=NULL)
    node2=node2->left;
    return node2;
}

node* delete_node(node* node1,int n)
{
    if(node1==NULL)
    {
        cout<<"empty tree\n";
        return node1;
    }
    else if(n>node1->data)
    {
        node1->right=delete_node(node1->right,n);
    }
     else if(n<node1->data)
    {
        node1->left=delete_node(node1->left,n);
    }
    else if(n==node1->data)
    {
        node* temp;
        if(node1->right==NULL && node1->left==NULL)
        {
            node1=NULL;
            free(node1);

        }
        else if(node1->left==NULL && node1->right!=NULL)
        {
            temp=node1;
            node1=node1->right;
            free(temp);
        }
        else if(node1->left!=NULL && node1->right==NULL)
        {
            temp=node1;
            node1=node1->left;
            free(temp);
        }
        else{
            
            temp=minimum(node1->right);
            node1->data=temp->data;
            node1->right=delete_node(node1->right,temp->data);
        }
    }
    return node1;
}


int main(){
node* root=NULL;
int ch,n;
cout<<" choice \n1.insert\n2.print tree\n";
cin>>ch;
while(ch!=0){
    switch (ch)
    {
    case 0:
    exit(0);
    case 1:
    cin>>n;
        root=insert(root,n);
        break;
    case 2:
        printTree(root,"",true);
        break;

    case 3:
    cout<<"enter node to delete";
    cin>>n;
        delete_node(root,n);
        break;
    default:
        break;
    }
    cout<<" choice \n1.insert\n2.print tree\n";
cin>>ch;
}

}