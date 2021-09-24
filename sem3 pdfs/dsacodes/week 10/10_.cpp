#include<bits/stdc++.h>
using namespace std;
struct bst {
    int data;
    bst *left,*right;
};
bst* insert(bst *root,int n);
void inorder(bst *root);
void postorder(bst* node);
void preorder(bst* node);
void search(bst* node,int n);
bst* delete_node(bst * node,int n);
bst* minimum(bst* node1);
bst* maximum(bst* node1);
int main(){
    int ch,n;
    bst *root=NULL,*temp;
    cout<<"enter yr choice.1.insertion\t2.inorder\t3.postorder\t4.preorder\t5.search node\tdelete node\n";
    cin>>ch;
    while(ch!=0)
    {
        switch(ch)
        {
            case 0:exit(1);
            case 1:
            cout<<"Enter the element to be inserted\n";
            cin>>ch;
            root=insert(root,ch);
            break;
            case 2: cout<<"inorder traversal\n";
            inorder(root);
            break;
            case 3:cout<<"postorder traversal\n";
            postorder(root);
            break;
            case 4:
            cout<<"preorder traversal\n";
            preorder(root);
            break;
            case 5:cout<<"enter the element to be searched\n";
            cin>>ch;
            search(root,ch);
            break;
            case 6:cout<<"enter the element to be deleted\n";
            cin>>ch;
            root=delete_node(root,ch);
        }
        cout<<"\nenter your choice.\n";
        cin>>ch;
    }  
}
bst * insert(bst * node,int n)
{
    if(node==NULL)
    {
        bst* newnode =new bst;
        newnode->data=n;
        newnode->left=newnode->right=NULL;
        return newnode;
    }
    if(node->data>n)
    {
        
        node->left=insert(node->left,n);
    }
     else if(node->data<n)
    {
        node->right=insert(node->right,n);
    }
    
    return node;   
}
void inorder(bst* node)
{
    if(node==NULL)
    return ;
    inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);
}
void postorder(bst* node)
{
    if(node==NULL)
    return ;
    postorder(node->left);
    postorder(node->right);
    cout<<node->data<<" ";
}


void preorder(bst* node)
{
    if(node==NULL)
    return ;    
    cout<<node->data<<" ";
    preorder(node->left);
    preorder(node->right);
}


void search(bst* node,int n)
{
    if(node==NULL)
    {
        cout<<"element not found "<<endl;
    return ;
    }
    else if(n==node->data)
    {
        cout<<"element "<<n<<" found "<<endl;
    }
    else if(n>node->data)
    {
        search(node->right,n);
    }
    else if(n<node->data)
    {
        search(node->left,n);
    }
}
bst* delete_node(bst * node,int n)
{
    if(node==NULL)
    {
        cout<<"cant delete\n";
        return node;
    }
    else if(n<node->data)
    node->left=delete_node(node->left,n);
    else if(n>node->data)
    node->right=delete_node(node->right,n);
    else if(node->data==n){
        bst* temp;
        if(node->left==NULL &&node->right==NULL)
        {
            delete(node);
            node=NULL;
            return node;
        }
        else if(node->left==NULL)
        {
            temp=node;
            node=node->right;
            delete(temp);
        }
        else if(node->right==NULL)
        {
            temp=node;
            node=node->left;
            delete(temp); 
        }
        else{
            temp=minimum(node->right);
            node->data=temp->data;
            node->right=delete_node(node->right,temp->data);
        }    
    }
    return node;
}
bst* minimum(bst* node1)
{
    if(node1==NULL)
    return node1;
    if(node1!=NULL &&node1->left!=NULL)
    return minimum(node1->left);
    else
    return node1;
}