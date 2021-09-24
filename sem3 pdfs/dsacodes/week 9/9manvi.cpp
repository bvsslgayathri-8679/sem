#include<bits/stdc++.h>
using namespace std;
char tree[30];
int index,n;
int leftchild(int);
int rightchild(int);
void parent(int);
void leftinsert();
void rightinsert();
void display();
void inorder(int);
void postorder(int);
void preorder(int);
int main()
{
   tree[0]='r';
   int choice;
   while(1)
   {
   cout<<"1)left insert 2)right insert 3) left child  4)right child  5)parent  6)display  7)inorder 8)postorder 9)preorder"<<endl;
   cin>>choice;
   switch(choice)
   {
       case 1:leftinsert();
               break;
       case 2:rightinsert();
               break;
       case 3: cout<<"enter index";
               cin>>index;
              cout<<tree[leftchild(index)];
               break;
       case 4:cout<<"enter index";
              cin>>index;
              cout<<tree[rightchild(index)];
              break;
       case 5: cout<<"enter index";
              cin>>index;
               parent(index);
               break;
       case 6:display();
               break;
       case 7:cout<<"enter index";
              cin>>index;
               inorder(index);
               break;
       case 8:cout<<"enter index";
              cin>>index;
               postorder(index);
               break;
       case 9:cout<<"enter index";
              cin>>index;
               preorder(index);
               break;
       default:exit(0);
   }
   }
 return 0;
}
void leftinsert()
{
    char val;
    cout<<"enter parent index"<<endl;
    cin>>index;
    if(tree[index]!='\0')
    {
        cout<<"enter any character";
        cin>>val;
        tree[index*2+1]=val;
        cout<<val<<" inserted at "<<index*2+1<<" index"<<endl;
    }
}
void rightinsert()
{
   char val;
    cout<<"enter parent index"<<endl;
    cin>>index;
    if(tree[index]!='\0')
    {
        cout<<"enter any character";
        cin>>val;
        tree[index*2+2]=val;
        cout<<val<<" inserted at "<<index*2+2<<" index"<<endl;
    }
 }

int leftchild(int index)
{
    if(tree[index]=='\0'||tree[2*index+1]=='\0')
    {
       // cout<<"there is no left child"<<endl;
       return -1;
    }
    else
    {
        return 2*index+1;
    }
}
int rightchild(int index)
{
    if(tree[index]=='\0'||tree[2*index+2]=='\0')
    {
        //cout<<"there is no right child"<<endl;
        return -1;
    }
    else
    {
        return 2*index+2;
    }
}
void parent(int index)
{
    if(tree[index]=='\0')
       cout<<"element doesnot exist at this index";
    else if(index==0)
       cout<<"its root";
    else
       cout<<tree[(index-1)/2];
}
void display()
{
    for(int i=0;i<30;i++)
    { 
        if(tree[i]!='\0')
           cout<<tree[i];
        else
           cout<<"_";
    }
}
void inorder(int index)
{
    if(index>=0 && tree[index]!='\0')
    {
    inorder(leftchild(index));
    cout<<tree[index]<<" ";
    inorder(rightchild(index));
    }
}                                                                                               
void postorder(int index)
{
    if(index>=0 && tree[index]!='\0')
    {
    postorder(leftchild(index));
    postorder(rightchild(index));
    cout<<tree[index]<<" ";
    }
}
void preorder(int index)
{
    if(index>=0 && tree[index]!='\0')
    {
    cout<<tree[index]<<" ";
    preorder(leftchild(index));
    preorder(rightchild(index));
    }
}