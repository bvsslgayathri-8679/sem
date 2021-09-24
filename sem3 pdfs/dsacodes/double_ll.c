#include<stdio.h>
#include<stdlib.h>
struct node
{
    /* data */
    int data;
    struct node* previous;
    struct node* next;
    
};
void insert(int);
void delete();
void insert_last(int);
int delete_last();
void Display_forward();
struct node *head,*newnode,*temp;

void main(){
    int ch,n;
    printf("enter your choice \n0.exit\n1.insert beginning\n2.delete\n3.insert last\n4.delete last\n5.Insert After\n6.delete element\n7.Display forward\n8.display backward\n\n");
    scanf("%d",&ch);
    while(ch!=0)
    {
        switch (ch)
        {
        case 0:exit(0);
        case 1:
            printf("enter element to be inserted\n");
            scanf("%d",&n);
            insert(n);
            break;
        case 2:delete();
            break;
        case 3:
            printf("enter element to be inserted\n");
            scanf("%d",&n);
            insert_last(n);
            break;
        case 4:
            delete_last();
            break;
        case 7:
            Display_forward();
            break;
        default:
            break;
        }
        printf("enter your choice \n0.exit\n1.insert beginning\n2.delete\n3.insert last\n4.delete last\n5.Insert After\n6.delete element\n7.Display forward\n8.display backward\n\n");
    scanf("%d",&ch);
    }
    
}
void insert(int n){
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("overflow\n");
    }
    else{
        newnode->previous=head;
        newnode->next=NULL;
        head=newnode;
        printf("node inserted\n");
    }

}

void delete(){

    temp=head;
    if(temp==NULL)
    printf("empty doubly linked list\n");
    else{
        head=temp->next;
        temp->previous=NULL;
        
        free(temp);
    }
}
void insert_last(int n)
{
    temp=head;
    
    while(temp!=NULL)
    {
        temp=temp->next;

    }
    newnode=(struct node*)malloc(sizeof(struct node));
    temp->next=newnode;
    newnode->previous=temp;
    newnode->next=NULL;

}

int delete_last(){
    temp=head;
    struct node *p;
    p=head;
    if(temp==NULL)
    printf("empty ll");
    else if(temp->next=NULL)
    {
        delete();
        return 0;
    }
    else{
        while(temp->next!=NULL)
        {
            temp=p->next;
            temp=temp->next;
        }
        temp->previous=NULL;
        p->next=NULL;
        free(temp);
        temp=head;
    }
    return 0;

}

void Display_forward(){
    temp=head;
    if(temp==NULL)
    {
        printf("empty ");

    }
    else{
        while (temp!=NULL)
        {
            /* code */
            printf("%d",temp->data);

            temp=temp->next;

        }

    }
}



