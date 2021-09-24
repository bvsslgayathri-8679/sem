#include<iostream>
#include<vector>
#include<cstdlib>

using namespace std;
struct node{
        int data;
        struct node *next;

    };
struct node *head;
struct node *l1;
/*vector <int> arr;
int n;
void traversing(struct node **head)
{
    
    struct node *ptr;
    ptr=*head;
    
      while (ptr != NULL) {
      cout<<" "<< ptr->data <<" ";
      ptr = ptr->next;
   }
}
void push(int s,struct node **head)
{
    
    struct node *newnode,*temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    
        newnode->data=n;
        if(*head==NULL)
        {
            newnode->next=NULL;
            *head=newnode;
            cout<<"node inserted "<<newnode->data<<" ";
        }
        else{
        temp=*head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
            cout<<temp->data;
        }
        temp->next=newnode;
        cout<<newnode->data<<" ";
        newnode->next=NULL;
        }     
    
}*/
int main(){
    
    int p,i,n;
    cin>>n;
    head=NULL;
    for(i=0;i<n;i++)
    {
        cin>>p;
        /*push(p,&head);
        cout<<" "<<p<<" ";
        arr.push_back(p);
        */

    } 
    /*traversing(&head);
    for(i=0;i<n;i++)
    {
        push(arr.front(),&l1);        
        cout<<" "<<arr.front()<<" "<<arr.back()<<" ";
        

    }
    
    cout<<"reversed ll ";
    traversing(&head);
    */
}