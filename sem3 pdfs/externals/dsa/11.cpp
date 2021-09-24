#include<bits/stdc++.h>
using namespace std;

struct node{
int data;
node* right;
node* left;
}*temp;

int max(int a,int b)
{
    return a>b?a:b;
}

int height(node* node1)
{
    int lh=0,rh=0;
    if(node1==NULL)
    return 0;
    if(node1!=NULL)
    {
        lh=height(node1->left);
        rh=height(node1->right);
    }
    return max(lh,rh)+1;
}

int balance_factor(node* node1)
{
    return height(node1->left)-height(node1->right);
}


node* right_rotation(node* node1)
{
    node * temp=node1->right;
    node1->right=temp->left;
    temp->left=node1;
    return temp;
}



node* left_rotation(node* node1)
{
    node* temp=node1->left;
    node1->left=temp->right;
    temp->right=node1;
    return temp;
}
node* right_left_rotation(node* node1)
{
    node* temp=node1->right;
    node1->right=left_rotation(temp);
    return right_rotation(node1);

}
node* left_right_rotation(node* node1)
{
    node* temp=node1->left;
    node1->left=right_rotation(temp);
    return left_rotation(node1);
}



node* balance(node* node1)
{
    int bf=balance_factor(node1);
    if(bf>=2 && balance_factor(node1->left)>0)
    node1=left_rotation(node1);
    else if(bf>=2 && balance_factor(node1->left)==0)
    node1=left_right_rotation(node1);
    else if(bf<=-2 && balance_factor(node1->right)<0)
    node1=right_rotation(node1);
    else if(bf<=-2 && balance_factor(node1->right)==0)
    node1=right_left_rotation(node1);

    return node1;
}


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
        node1=balance(node1);
    }
    else if(n<node1->data)
    {
        node1->left=insert(node1->left,n);
        node1=balance(node1);
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
        node1=balance(node1);
    }
     else if(n<node1->data)
    {
        node1->left=delete_node(node1->left,n);
        node1=balance(node1);
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
            node1=balance(node1);

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