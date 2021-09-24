#include <iostream>
#include <stdlib.h>

using namespace std;
struct avl{
    int data;
    avl* left,*right;
};
avl* root=NULL;
avl* insert_node(avl*,int );
avl* balance_node(avl*);
int max(int ,int );
int height(avl*);
int balancing_factor(avl*);
avl* left_rotation(avl* );
avl* right_rotation(avl*);
avl* left_right_rotation(avl* );
avl* right_left_rotation(avl* );
void inorder(avl* );
void preorder(avl*);
void postorder(avl*);
int search(avl* ,int );
avl* delete_node(avl * ,int );
avl* minimum(avl* );
int main()
{
    
    int ch,n;
    cout<<"enter your choice\n1.insert\t2.inorder\t3.preorder\t4.postorder\t.delete\t5.height\tsearch\t\n";
    cin>>ch;
    while(ch!=0)
    {
        
        switch(ch)
        {
            case 0: exit(0);
            case 1:cout<<"enter the element to be inserted\n";
                    cin>>n;
                    root=insert_node(root,n);
                    
                    break;
            case 2:cout<<"inorder\n";
            inorder(root);
                    break;
            case 3:cout<<"preorder\n";
            preorder(root);
            break;
            case 4:cout<<"postorde\n";
            postorder(root);
            break;
            case 5:cout<<"enter the element to be searched\n";
                   cin>>n;
                   ch=search(root,n);
                   if(ch==0)
                   cout<<"element "<<n<<" not found\n";
                   else if(ch==1)
                   cout<<"element "<<n<<" is found \n";
                   break;
            case 6:cout<<"enter the element to be deleted\n";
                   cin>>n;
                   root=delete_node(root,ch);
                   break;
            default:cout<<"enter proper choice\n";

        }
        cout<<"\nenter yr choice\n";
        cin>>ch;
    }
}
int max(int a,int b)
{
    return a>b?a:b;
}
int height(avl* root)
{
    int h=0,lh,rh;
    if(root==NULL)
    return 0;
    if(root!=NULL)
    {
        lh=height(root->left);
        rh=height(root->right);
        
    }
    h=max(lh,rh);
    return h+1;
}

int balancing_factor(avl* root)
{
    return (height(root->left)-height(root->right));

}

avl* left_rotation(avl* root)
{
    avl* temp;
    temp=root->left;
    root->left=temp->right;
    temp->right=root;
    return temp;
}
avl* right_rotation(avl* root)
{

    avl* temp;
    temp=root->right;
    root->right=temp->left;
    temp->left=root;
    return temp;
}
avl* left_right_rotation(avl* root)
{
avl * temp;
temp=root->left;
root->left=right_rotation(temp);
return left_rotation(root);
}

avl* right_left_rotation(avl* root)
{
avl * temp;
temp=root->right;
root->right=left_rotation(root);
return right_rotation(root);
}

avl* insert_node(avl* root,int n)
{
    if(root==NULL)
    {
        root=new avl;
        root->data=n;
        root->left=NULL;
        root->right=NULL;
        return root;

    }
    else if(n>root->data)
    {
        root->right=insert_node(root->right,n);
        root=balance_node(root);

    }
    else if(n<root->data)
    {
        root->left=insert_node(root->left,n);
        root=balance_node(root);
    }
    return root;
}


void inorder(avl* root){
    if(root!=NULL){
    inorder(root->left);
    cout<<root->data<<"\t";
    inorder(root->right);
    }
}
void preorder(avl* root){
    if(root!=NULL){
    cout<<root->data<<"\t";
    preorder(root->left);
    preorder(root->right);
    }
}
void postorder(avl* root){
    if(root!=NULL){
    postorder(root->left);
    
    postorder(root->right);
    cout<<root->data<<"\t";
    }
}

int search(avl* node,int n){
    if(node==NULL)
    {
        cout<<"element cant be searched\n";
        return 0;
    }
    if(node->data==n)
    {
        return 1;
    }
    else if(n>node->data)
    {
        return search(node->right,n);
    }
    else if(n<node->data)
    {
        return search(node->left,n);
    }
    return 0;
}

avl* balance_node(avl* root){
    int bf=balancing_factor(root);
    avl* temp;
    if(bf<-1)
    {
        if(balancing_factor(root->right)>0)
        root=right_left_rotation(root);
        else
        root=right_rotation(root);
     }
    else if(bf>1)
    {
        if(balancing_factor(root->left)>0)
        root=left_rotation(root);
        else
        root=left_right_rotation(root);

    }
    return root;
   
}

avl* delete_node(avl* root,int n)
{
    
    if(root==NULL)
    {
        cout<<"jgewjgfjs";
        return root;
        
    }
    if(n < root->data)
    {
    root->left=delete_node(root->left,n);
    root=balance_node(root);

    }
    else if(n>root->data)
    {
    root->right=delete_node(root->right,n);
    root=balance_node(root);

    }
    
    else{
        if(root->left==NULL)
        {
            avl* temp;
            temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL)
        {
            avl* temp;
             temp=root->left;
             free(root);
             return temp;
        }
            avl* temp;
            temp=minimum(root->right);
            root->data=temp->data;
            root->right=delete_node(root->right,temp->data);
            root=balance_node(root);

    }
    
    return root;
}

avl* minimum(avl* root)
{
    if(root==NULL)
    return root;
    if(root->left!=root)
    return minimum(root->left);
    else
    return root;
}