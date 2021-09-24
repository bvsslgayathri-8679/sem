#include<bits/stdc++.h>
using namespace std;
struct node
{
    node* left;
    int data;
    node* right;
}*root=NULL,*root1;
void insert();
node* search(int);
void deletion(int);
void inorder(node*);
int main()
{ 
    int choice,key;
    while(1)
    {
    cout<<"\nLIST:\n1)insert\n2)search\n3)delete\n4)inorder\n5)preorder\n6)postorder"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:insert();
                break;
        case 2: cout<<"enter key value to search"<<endl;
                cin>>key; 
                if(search(key)==NULL)  
                   cout<<"element not found";       
                else if(key==root->data||search(key)->right->data==key||search(key)->left->data==key)
                   cout<<key<<"is found";
                break;
        case 3:cout<<"enter key value to delete"<<endl;
               cin>>key;
               deletion(key);
               break;
        case 4:root1=root;
               inorder(root1);
               break;
        default:exit(0);
    } 
    }
    return 0;
}
void insert()
{
    node *temp,*newnode=new node();
    cout<<"enter value to be inserted"<<endl;
    cin>>newnode->data;
    newnode->left=newnode->right=NULL;
    if(root==NULL)
    {
        root=newnode;
    }
   else
    {
     root1=root;
    while(root1)
    {
         temp=root1;
        if(newnode->data<root1->data)
        {
              root1=root1->left;   
        }
        else
        {
           root1=root1->right;
        }
    }
    if(newnode->data>temp->data)
    {
       temp->right=newnode;
    }
    else
    {
       temp->left=newnode;
    }
   }
}
node* search(int key)
{
    node* root2=root1=root;
    while(root1)
    {
        if(key==root1->data)
        {
            return root2;
        }
        else if(key<root1->data)
        {
            root2=root1;
            root1=root1->left;
            if(root1!=NULL)
            {
              if(root1->data==key)
                  return root2;
            }
        }
        else if(key>root1->data)
        {
            root2=root1;
            root1=root1->right;
           if(root1!=NULL)
           {
            if(root1->data==key)
               return root2;
           }
        }
    }
    return NULL;
}
void deletion(int key)
{
    node *curr, *prev;
    prev=search(key);
    if(prev==NULL)
    {
        cout<<"data not found to delete"<<endl;
    }
 else
 {
    if(key==root->data)
    {
        curr=prev;
    }
    else if(key==prev->right->data)
    {
        curr=prev->right;
    }
    else
    {
        curr=prev->left;
    }
    if(curr->left==NULL&&curr->right==NULL) //0 child
    {
        if(key==root->data)
        {
            root=NULL;
        }
        else if(curr==prev->right)
        {
           prev->right=NULL;
        }
        else
        {
          prev->left=NULL;
        }
        free(curr);
    }
    else if(curr->left!=NULL&&curr->right!=NULL) // 2 child
    {
       node* next,* temp; 
       temp=next=curr->right;
       while(next->left)
       {
           temp=next;
           next=next->left;
       }
       curr->data=next->data;
       temp->left=NULL;
       if(temp==next)//base condition
       {
           curr->right=next->right;
       }
       free(next);
    }
    else //1 child
    {
          node *next;
          if(curr->right!=NULL)
          next=curr->right;
          else
          next=curr->left;
          curr->data=next->data;
          curr->left=next->left;
          curr->right=next->right;
          free(next);
    }
 }
}
void inorder(node * root1)
{
    if(root1)
    {
        inorder(root1->left);
         cout<<root1->data<<" ";
        inorder(root1->right);
    }
}