#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *left,*right;
};
struct node *temp,*newnode,*root=NULL;
struct node* insert(struct node *root,int val)
{
      if(root==NULL)
      {
          newnode=(struct node*)malloc(sizeof(struct node));
          newnode->data=val;
          newnode->left=NULL;
          newnode->right=NULL;
          return newnode;
      }
      else
      {
          if(val<root->data)
          root->left=insert(root->left,val);
          else if(val>root->data)
          root->right=insert(root->right,val);
          return root;
      }
}
struct node* min(struct node *root)
{
    temp=root;
    while(temp && temp->left!=NULL)
    temp=temp->left;
    return temp;
}
struct node *deletenode(struct node *root,int val)
{
    if(root==NULL)
    return root;
    if (val<root->data)
    root->left=deletenode(root->left,val);
    else if(val>root->data)
    root->right=deletenode(root->right,val);
    else
    {
        if(root->left==NULL && root->right==NULL)
        {
            root=NULL;
            free(root);
        }
       else if(root->left==NULL && root->right!=NULL)
       {
       newnode=root;
       root=root->right;

       free(newnode);
       
       }
       else if(root->right==NULL && root->left!=NULL)
       {
           newnode=root;
            root=root->left;

            free(newnode);
           
       }
       else{
       temp=min(root->right);
       root->data=temp->data;
       root->right=deletenode(root->right,temp->data);
       }
    }
    return root;
}
struct node *search(struct node *root,int val)
{
    if(root==NULL)
    cout<<"Element not found"<<endl;
    else
    {
        if (root->data==val)
        cout<<"Element found"<<endl;
        else if(val<root->data)
        search(root->left,val);
        else if(val>root->data)
        search(root->right,val);
    }
    return root;
}
void inorder(struct node *root)
{
    if(root!=NULL)
    {
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    }
}
int main()
{
    int ch,n,val,i;
    while(ch!=5)
    {
        cout<<"Enter choice\n1.Insertion\n2.Deletion\n3.Searching\n4.Inorder\nOthers to exit"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
            cout<<"Enter the element"<<endl;
            cin>>val;
            root=insert(root,val);
            break;
            case 2:
            cout<<"Enter the value to be deleted"<<endl;
            cin>>val;
            root=deletenode(root,val);
            break;
            case 3:
            cout<<"Enter the value to be searched"<<endl;
            cin>>val;
            root=search(root,val);
            break;
            case 4:
            cout<<"Inorder travel of binary search tree is"<<endl;
            inorder(root);
            break;
            default:
            cout<<"Invalid choice"<<endl;
            exit(0);
            break;
            
        }
    }
}