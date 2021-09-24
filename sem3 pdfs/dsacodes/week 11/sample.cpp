#include<bits/stdc++.h>
using namespace std;
struct avl {
    int data;
    avl *left,*right;
};
avl* insert(avl *root,int n);
void inorder(avl *root);
void postorder(avl* node);
void preorder(avl* node);
void search(avl* node,int n);
avl* delete_node(avl * node,int n);
avl* minimum(avl* node1);
avl* maximum(avl* node1);
int main(){
    int ch,n;
    avl *root=NULL,*temp;
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

int max(int a,int b)
{
    return a>b?a:b;
}
int height(avl* node)
{
    int h=0;
    if(node==NULL)
    return 0;
    if(node!=NULL)
    {
        int lh=height(node->left);
        int rh=height(node->right);
        h=max(lh,rh);
    }
    return h+1;
}

int balancing_factor(avl* node)
{
    return (height(node->left)-height(node->right));

}

avl* right_rotation(avl* node1)
{
    avl* temp;
    temp=node1->left;
    node1->left=temp->right;
    temp->right=node1;
    return temp;
}
avl* left_rotation(avl* node1)
{

    avl* temp;
    temp=node1->right;
    node1->right=temp->left;
    temp->left=node1;
    return temp;
}
avl* left_right_rotation(avl* node1)
{
avl * temp;
temp=node1->left;
node1->left=right_rotation(temp);
return left_rotation(temp);
}

avl* right_left_rotation(avl* node1)
{
avl * temp;
temp=node1->right;
node1->right=left_rotation(temp);
return right_rotation(temp);
}
avl * insert(avl * node,int n)
{
    if(node==NULL)
    {
        avl* newnode =new avl;
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
    else
    return node;   
}
void inorder(avl* node)
{
    if(node==NULL)
    return ;
    inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);
}
void postorder(avl* node)
{
    if(node==NULL)
    return ;
    postorder(node->left);
    postorder(node->right);
    cout<<node->data<<" ";
}


void preorder(avl* node)
{
    if(node==NULL)
    return ;    
    cout<<node->data<<" ";
    preorder(node->left);
    preorder(node->right);
}


void search(avl* node,int n)
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
avl* delete_node(avl * node,int n)
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
        avl* temp;
        if(node->left==NULL &&node->right==NULL)
        {
            delete(node);
            node=NULL;
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
    if(node==NULL)
    return node;
    int bf=balancing_factor(node);
    if(bf>1 && balancing_factor(node->left)>=0)
    return right_rotation(node);
    if(bf>1 && balancing_factor(node->left)<0)
    {
    left_right_rotation(node);
    }
    if(bf<-1 && balancing_factor(node->right)<=0)
    return left_rotation(node);
    if(bf<-1 &&balancing_factor(node->right)>0)
    right_left_rotation(node);
    
    return node;
}
avl* minimum(avl* node1)
{
    if(node1==NULL)
    return node1;
    if(node1!=NULL &&node1->left!=NULL)
    return minimum(node1->left);
    else
    return node1;
}


