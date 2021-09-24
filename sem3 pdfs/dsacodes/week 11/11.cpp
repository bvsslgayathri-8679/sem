#include <iostream>
#include <stdlib.h>

using namespace std;
struct avl{
    int data;
    avl* left,*right;
};

avl* insert_node(avl* node,int n);
avl* balance_node(avl* node1);
int max(int a,int b);
int height(avl* node);
int balancing_factor(avl* node);
avl* left_rotation(avl* node1);
avl* right_rotation(avl* node1);
avl* left_right_rotation(avl* node1);
avl* right_left_rotation(avl* node1);
void inorder(avl* node1);
void preorder(avl* node1);
void postorder(avl* node1);
int search(avl* ,int );
avl* delete_node(avl * node,int n);
avl* minimum(avl* node1);
int main()
{
    avl* root=NULL;
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
                   root=delete_node(root,n);
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

avl* left_rotation(avl* node1)
{
    avl* temp;
    temp=node1->left;
    node1->left=temp->right;
    temp->right=node1;
    return temp;
}
avl* right_rotation(avl* node1)
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

avl* insert_node(avl* node,int n)
{
    if(node==NULL)
    {
        node=new avl;
        node->data=n;
        node->left=NULL;
        node->right=NULL;
        return node;

    }
    else if(n>node->data)
    {
        node->right=insert_node(node->right,n);
        node=balance_node(node);

    }
    else if(n<node->data)
    {
        node->left=insert_node(node->left,n);
        node=balance_node(node);
    }
    return node;
}

avl* balance_node(avl* node1){
    int bf=balancing_factor(node1);
    avl* temp;
    if(bf<-1)
    {
        if(balancing_factor(node1->right)>0)
        node1=right_left_rotation(node1);
        else
        node1=right_rotation(node1);
     }
    else if(bf>1)
    {
        if(balancing_factor(node1->left)>0)
        node1=left_rotation(node1);
        else
        node1=left_right_rotation(node1);

    }
    return node1;
   
}

void inorder(avl* node1){
    if(node1!=NULL){
    inorder(node1->left);
    cout<<node1->data<<"\t";
    inorder(node1->right);
    }
}
void preorder(avl* node1){
    if(node1!=NULL){
    cout<<node1->data<<"\t";
    preorder(node1->left);
    preorder(node1->right);
    }
}
void postorder(avl* node1){
    if(node1!=NULL){
    postorder(node1->left);
    
    postorder(node1->right);
    cout<<node1->data<<"\t";
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


avl* delete_node(avl* node,int n)
{
     avl *temp;
    if(node==NULL)
    {
        return NULL;
    }
    if(n>node->data)
    node->right=delete_node(node->right,n);
    else if(n<node->data)
    node->left=delete_node(node->left,n);
    else{
        if(node->left && node->right)
        {
            temp=minimum(node->right);
            node->data=temp->data;
            node->right=delete_node(node->right,node->data);
        }
        else
        {
           
            if(node->left == NULL)
                node = node->right;
            else if(node->right == NULL)
                node = node->left;
            delete temp;
        }
        if(node==NULL)
        {
        return node;
        }
        node=balance_node(node);
    }
    return node;
}

avl* minimum(avl* node1)
{
    if(node1==NULL)
    return node1;
    if(node1->left!=NULL)
    return minimum(node1->left);
    else
    return node1;
}