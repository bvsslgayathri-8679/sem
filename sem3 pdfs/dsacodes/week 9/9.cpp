#include<bits/stdc++.h>

using namespace std;
void root_node(char);
void left_subtree(char,int);
void right_subtree(char,int);
int length_arr();
int get_right(int n);
int get_left(int n);
void inorder(int ind);
int traversal();
void postorder(int ind);
void preorder(int ind);
char tree[100];
int main(){
    root_node('A');
    int ch,n;
    char c;
    cout<<"enter your choice\n0.exit\t1.left sub tree insertion\t2.right subtree insertion\t3.inorder\t4.postorder\t5.preorder\t6.traversal\n";
    cin>>ch;
    tree[0]='\0';
    while(ch!=0)
    {
        switch (ch)
        {
        case 0:exit(0);
        case 1: cout<<"enter element and parent node index\n";
        cin>>c>>n;
        if(c!='!')
        left_subtree(c,n);
        break;
        case 2: cout<<"enter element and parent node index\n";
        cin>>c>>n;
        if(c!='!')
        right_subtree(c,n);
        break;
        case 3:
        cout<<"enter the root node position\n";
        cin>>n;
        cout<<"inorder traversal\n";
        inorder(n);
        break;
        case 4:
        cout<<"enter the root node position\n";

        cin>>n;

        cout<<"postorder traversal\n";
        postorder(n);
        break;
        case 5:
        cout<<"enter the root node position\n";
        cin>>n;
        cout<<"preorder traversal\n";
        preorder(n);
        break;
        case 6:
        traversal();
        break;
        default:
            break;
        }
        cout<<"\nenter your choice\n";
        cin>>ch;
    }
}

void root_node(char c)
{
    if(tree[1]!='\0')
    cout<<"Root node is already present\n";
    else{
        tree[1]=c;
    }
}

void left_subtree(char c,int n){
    if(tree[n]=='\0')
    {
        cout<<"parent node "<<n<<" is empty\n";
    }
    else{
        tree[(n*2)]=c;
    }
    
}
void right_subtree(char c,int n){
    if(tree[n]=='\0')
    {
        cout<<"parent node is empty\n";
    }
    else{
        tree[(n*2)+1]=c;
    }
}
void inorder(int ind){
    if(ind>0 && tree[ind]!='\0')
    {
        inorder(get_left(ind));
        cout<<tree[ind]<<"\t";
        inorder(get_right(ind));
    }
}
void postorder(int ind){
    if(tree[ind]!='\0' && ind>0)
    {
        postorder(get_left(ind));
        postorder(get_right(ind));
        cout<<tree[ind]<<"\t";
    }
}
void preorder(int ind){
    if(tree[ind]!='\0' && ind>0)
    {
        cout<<tree[ind]<<"\t";
        preorder(get_left(ind));
        preorder(get_right(ind));
        
    }
}
int get_left(int n)
{
    if(tree[n]!='\0' && n*2<10)
    {
        return n*2;
    }
    return -1;
}
int get_right(int n)
{
    if(tree[n]!='\0' && n*2+1<10)
    {
        return n*2+1;
    }
    return -1;
}
int length_arr()
{
    int len,i=1;

    while(tree[i]!='\0')
    {
    len+=1;
    i+=1;
    }
    return len;
}

int traversal(){
    int i;
    for(i=0;i<20;i++){
        if(tree[i]!='\0')
        cout<<tree[i];
        else
        cout<<"-";
    }
}