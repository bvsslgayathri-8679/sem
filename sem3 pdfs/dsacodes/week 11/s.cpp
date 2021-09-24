#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
struct avl_tree
{
    int data;
    struct avl_tree *left;
    struct avl_tree *right;
};
struct avl_tree* root;
struct avl_tree* temp;
class avl
{
    public:
        int height(struct avl_tree*);
        int diff(struct avl_tree*);
        avl_tree* ll(struct avl_tree*);
        avl_tree* rr(struct avl_tree*);
        avl_tree* lr(struct avl_tree*);
        avl_tree* rl(struct avl_tree*);
        avl_tree* balance(struct avl_tree*);
        avl_tree* insertnode(struct avl_tree*,int);
        avl_tree* deletenode(struct avl_tree*,int);
        void display(struct avl_tree*,int);
        avl_tree* min(struct avl_tree*);
        avl()
        {
            root=NULL;
        }
};

int main() 
{
    avl t;
    int ch,stop=1,i,n,val;
    cout<<"1.insertion\n2.deletion\n3.inorder traversal\nothers to stop\n";
    
    while(stop)
    {
        cout<<"enter choice"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1: cout<<"enter no.of elements to be inserted"<<endl;
                    cin>>n;
                    for(i=0;i<n;i++)
                    {
                        cin>>val;
                        root=t.insertnode(root,val);
                    }
                    break;
            case 2: cout<<"enter the element to be deleted"<<endl;
                    cin>>val;
                    root=t.deletenode(root,val);
                    break;
            case 3: cout<<"inorder traversal of the binary search tree is: ";
                    t.display(root,1);
                    break;
            default:stop=0;
                    break;
        }
    }
   
   return 0;
}

/*void avl::inorder(struct avl_tree *root) {
    if (root != NULL) {
      inorder(root->left);
      cout<<root->data<<" ";
      inorder(root->right);
    }
}*/

void avl::display(struct avl_tree* ptr, int level)

{

int i;

if (ptr!=NULL)

{

display(ptr->right, level + 1); printf("\n");
if (ptr == root) cout<<"Root -> ";
for (i = 0; i < level && ptr != root; i++) cout<<"  ";
cout<<ptr->data; display(ptr->left, level + 1);
}
}

struct avl_tree* avl::insertnode(struct avl_tree* root, int val) {
    if (root == NULL)
    {
        temp = (struct avl_tree *)malloc(sizeof(struct avl_tree));
        temp->data = val;
        temp->left = temp->right = NULL;
        return temp;
    }
    if (val < root->data)
    {
        root->left = insertnode(root->left, val);
        root=balance(root);
    }
   
    else if (val > root->data)
    {
        root->right = insertnode(root->right, val);
        root=balance(root);
    }
    return root;
}

struct avl_tree* avl::min(struct avl_tree* node)
{
    struct avl_tree* current = node;
    while (current && current->left != NULL)
        current = current->left;
 
    return current;
}

struct avl_tree* avl::deletenode(struct avl_tree* root, int data)
{
    if (root == NULL)
    {
        return root;
        cout<<"jgewjgfjs";
    }
    if (data < root->data){
        root->left = deletenode(root->left, data);
        root=balance(root);
    }
    else if (data > root->data)
    {
        root->right = deletenode(root->right, data);
        root=balance(root);
    }
    else {
        if (root->left == NULL) {
            struct avl_tree* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            struct avl_tree* temp = root->left;
            free(root);
            return temp;
        }
        struct avl_tree* temp = min(root->right);
        root->data = temp->data;
        root->right = deletenode(root->right, temp->data);
        root=balance(root);
    }
    return root;
}
int avl::diff(struct avl_tree* root)
{
    int lh=height(root->left);
    int rh=height(root->right);
    return lh-rh;
}

int avl::height(struct avl_tree * root)
{
    int lh,rh;
    if(root!=NULL)
    {
        lh=height(root->left);
        rh=height(root->right);
    }
    int maximum=max(lh,rh);
    return maximum+1;
}

struct avl_tree* avl::ll(struct avl_tree* root)
{
    struct avl_tree* temp;
    temp=root->left;
    root->left=temp->right;
    temp->right=root;
    return temp;
}
struct avl_tree* avl::rr(struct avl_tree* root)
{
    struct avl_tree* temp;
    temp=root->right;
    root->right=temp->left;
    temp->left=root;
    return temp;
}
struct avl_tree* avl::lr(struct avl_tree* root)
{
    struct avl_tree* temp;
    temp=root->left;
    root->left=rr(temp);
    return ll(root);
}
struct avl_tree* avl::rl(struct avl_tree* root)
{
    struct avl_tree* temp;
    temp=root->right;
    root->right=ll(temp);
    return rr(root);
}

struct avl_tree* avl::balance(struct avl_tree* root)
{
    int b_fact;
    b_fact=diff(root);
    if (b_fact>1) {
        if (diff(root->left) > 0)
         root=ll(root);
      else
         root=lr(root);
   } else if (b_fact<-1) {
      if (diff(root->right) > 0)
         root=rl(root);
      else
         root=rr(root);
   }
   return root;
}
