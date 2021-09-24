#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node *head,*head1,*new_node;
 struct node *head=NULL;
void insertbegin();
void insertafter();
void insertend();
void insertbefore();
void display();
void frontdelete();
void backdelete();
void deletenode();
void main()
{
    int ch;
    while(1)
    {
    printf("\n1)insertion at the beginning 2)insertion at the ending 3)insertion after given node 4)insertion before given node 5)front node deletion 6)last node deletion 7)deletion of given node 8)display 9)exit");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:  insertbegin(); 
                   break;         
        case 2:   insertend();
                    break;
        case 3:   insertafter();
                    break;
        case 4:   insertbefore();
                    break;           
        case 5:  frontdelete();
                    break;
        case 6:  backdelete();
                    break;             
        case 7:  deletenode();
                    break;    
        case 8:    display();
                    break;         
        case 9:     exit(0);     
    }
    }
}
void insertbegin()
{
    struct node* new_node=malloc(sizeof(struct node));
                 printf("\nenter any value");
                 scanf("%d",&(new_node->data));
                 new_node->next=NULL;
                     if(head==NULL)
                     {
                         head=new_node;
                     }
                     else
                     {
                      new_node->next=head;
                      head=new_node;
                     }             
}
void insertend()
{
    struct node* new_node=malloc(sizeof(struct node));
                 printf("\nenter any value");
                 scanf("%d",&(new_node->data));
                 new_node->next=NULL;
                     if(head==NULL)
                     {
                         head=new_node;
                     }
                     else
                     {  
                      head1=head;
                     while(head1->next!=NULL)
                     {
                         head1=head1->next;
                     }
                     head1->next=new_node;  
                     } 
}
void insertafter()
{ 
                   struct node* new_node=malloc(sizeof(struct node));
                   printf("\nenter any value");
                   scanf("%d",&(new_node->data));
                    new_node->next=NULL;
                    int n;
                     printf("\n after which value");
                     scanf("%d",&n);
                     head1=head;
                      if(head==NULL)
                     {
                         printf("\nnot possible");
                     }
                     else
                     {
                     while(head1->data!=n)
                     {
                          head1=head1->next;
                     }
                        new_node->next=head1->next;
                        head1->next=new_node;
                     }
}
void insertbefore()
{
                    struct node* new_node=malloc(sizeof(struct node));
                    struct node* head2;
                   printf("\nenter any value");
                   scanf("%d",&(new_node->data));
                    new_node->next=NULL;
                    int n,c=0;
                     printf("\n before which value");
                     scanf("%d",&n);
                     head1=head;
                      if(head==NULL)
                     {
                         printf("\nnot possible");
                     }
                     else
                     {
                     while(head1->data!=n)
                     {
                         c++;
                         head2=head1;
                         head1=head1->next;
                     }
                     new_node->next=head1;
                     if(c>=1)
                     head2->next=new_node;
                     if(c==0)
                     head=new_node;
                     }
}
void display()
{
    if(head==NULL)
    {
        printf("\nthere is nothing to display");
    }
    head1=head;
    while(head1!=NULL)
    {
    printf("\n%d",head1->data);
    head1=head1->next;
    }
}
void frontdelete()
{
    head1=head;
    head=head->next;
    free(head1);
}
void backdelete()
{
   struct node *head2;
   head1=head;
   while(head1->next!=NULL)
   {
       head2=head1;
       head1=head1->next;
   }  
   if(head1==head)
   {
       head=NULL;
   }
   else
   {
   head2->next=NULL;
   } 
   free(head1);
}  
void deletenode()
{
    struct node* head2; //inorder to access previous element use head2 pointer 
    int n;
    printf("\nenter the value to be deleted");
    scanf("%d",&n);
    head1=head;
while(head1->data!=n)
{
    head2=head1;
    head1=head1->next;
}
if(head1==head)
{
    head=NULL;
}
else
{
head2->next=head1->next;
}
free(head1);
}