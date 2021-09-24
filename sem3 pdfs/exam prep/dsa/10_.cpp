#include<bits/stdc++.h>
using namespace std;
struct node{
    int n;
    node* left,*right;
}*root,*temp;


void printTree(node *root, string indent, bool last) 
{
 if (root != nullptr) 
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
 cout << root->n << endl;
 printTree(root->left, indent, false);
 printTree(root->right, indent, true);
 }
}
node* insert(node * root,int n)
{
    temp=root;
    if(temp==NULL)
    {
        node* newnode;
       newnode =new node;
       newnode->n=n;
       newnode->left=newnode->right=NULL;
       return newnode;
    }
    else if(n<temp->n)
    {
        temp->left=insert(temp->left,n);
    }
    else if(n>temp->n)
    {
        temp->right=insert(temp->right,n);
    }
    return root;
}
node * display(node * node)
{
    if(node==NULL)
    return node;
    display(node->left);
    cout<<node->n<<" ";
    display(node->right);

    return node;
}
node* minimum(node* root)
{
    while(root->left!=NULL && root!=NULL)
    {
        return minimum(root->left);
    }
    return root;
}
node* deletenode(node* root,int n){
    node* temp=root;
    if(temp==NULL)
    {
        return temp;
    }
    else if(n<temp->n)
    {
        
        temp->left=deletenode(temp->left,n);
        
    }
    else if(n>temp->n)
    {
        
        temp->right=deletenode(temp->right,n);
    }
    else{
        if(temp->left==NULL && temp->right==NULL)
        {
            temp=NULL;
            free(temp);
        }
        else if(temp->left==NULL)
        {
            node* temp1=temp->right;

            temp=temp->right;
            free(temp1);
        }
        else if(temp->right==NULL)
        {
            node* temp1=temp->left;
            temp1=temp1->left;
            free(temp1);
        }
        else{
                node* temp1=minimum(temp->right);
                temp->n=temp1->n;
                temp->left=deletenode(temp->left,temp1->n);

        }
    }
    return temp;
}
int main(){
    cout<<"insert\n";
    root=insert(root,5);
    cout<<"insert\n";
  
    root=insert(root,6);
    root=insert(root,3);
    root=insert(root,2);
    root=insert(root,4);
    root=insert(root,9);
    cout<<"display\n";
    printTree(root," ",true);
    display(root);
    cout<<"delete 6"<<endl;
    deletenode(root,6);
    printTree(root," ",true);
    cout<<"display\n";
    display(root);
    cout<<"delete 3"<<endl;
    deletenode(root,3);
    cout<<"display\n";
    display(root);
    cout<<"delete 5"<<endl;
    deletenode(root,5);
    cout<<"display\n";
    display(root);
    printTree(root," ",true);
}