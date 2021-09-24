#include<bits/stdc++.h>
using namespace std;
struct node{
    int n;
    node* left,*right;
}*root,*temp;
int max(int a,int b){
    return a>b?a:b;
}
int height(node* root)
{
    int lh=0,rh=0;
    if(root==NULL)
    return 0;
    if(root!=NULL)
    {
        lh=height(root->left);
        rh=height(root->right);

    }
    return max(lh,rh)+1;
}
int balancing_factor(node* root)
{
    return height(root->left)-height(root->right);
}
node* left_rotation(node* root)
{
    node* temp=root->left;
    root->left=temp->right;
    temp->right=root;
    return temp;
}
node* right_rotation(node* root)
{
    node* temp=root->right;
    root->right=temp->left;
    temp->left=root;
    return temp;
}
node* balance(node* root)
{
   int bf=balancing_factor(root);
   node* temp;
   if(bf>=2 && balancing_factor(root->left)>0){
      root=left_rotation(root);
   } 
   else if(bf>=2 && balancing_factor(root->left)==0){
       root->left=right_rotation(root->left);
       root=left_rotation(root);
   }
   else if(bf<=-2 && balancing_factor(root->right)<0){
       root=right_rotation(root);
   }
   else if(bf<=-2 && balancing_factor(root->right)==0)
   {
       root->right=left_rotation(root->right);
       root=right_rotation(root);
   }
   return root;
}
node* insert(node * root,int n)
{
    
    if(root==NULL)
    {
      root=new node;
       root->n=n;
       root->left=root->right=NULL;
       return root;
    }
    else if(n<root->n)
    {
        root->left=insert(root->left,n);
                root=balance(root);

    }
    else if(n>root->n)
    {
        root->right=insert(root->right,n);
                root=balance(root);

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
    if(root==NULL)
    return root;
    while(root->left!=NULL && root!=NULL)
    {
        root=root->left;
    }
    return root;
}
node* deletenode(node* root,int n){
    if(root==NULL)
    {

        return root;
    }
    else if(n<root->n)
    {
        
        root->left=deletenode(root->left,n);
        root=balance(root);
    }
    else if(n>root->n)
    {
        
        root->right=deletenode(root->right,n);
        root=balance(root);
    }
    else{
        if(root->left==NULL && root->right==NULL)
        {
            root=NULL;
            free(root);
            
        }
        else if(root->left==NULL)
        {
            node* temp=root;

            root=root->right;
            free(temp);
        }
        else if(root->right==NULL)
        {
            node* temp=root;
            root=root->left;
            free(temp);
        }
        else{
                node* temp=minimum(root->right);
                root->n=temp->n;
                root->right=deletenode(root->right,temp->n);
                root=balance(root);

        }
    }
    


    return root;


}


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

int main(){
    int ch,n;
    cout<<"enter your choice\n1.insert\t2.display\t3.print tree\t4.delete\t\n";
    cin>>ch;
    while(ch!=0)   
    {
        
        switch(ch)
        {
            case 0: exit(0);
            case 1:cout<<"enter the element to be inserted\n";
                    cin>>n;
                    root=insert(root,n);
                    
                    break;
            case 2:cout<<"display\n";
                    display(root);
                    break;
            case 3:cout<<"print tree\n";
            printTree(root,"",true);
            break;
            case 4:cout<<"enter the element to be deleted\n";
                   cin>>n;
                   root=deletenode(root,n);
                   break;
            default:cout<<"enter proper choice\n";

        }
        cout<<"\nenter yr choice\n";
        cin>>ch;
    }
}