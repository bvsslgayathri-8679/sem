#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;                  
};
struct node *newnode,*temp,*head=NULL;
void insert_beg(int);
void insert_end(int);
void insert_after(int,int);
void del_beg();
void del_end();
void del_num(int);
void traversing();
int search(int);

void main(){
    int ch,c,n,choice,num;
    printf("Enter ur choice other than 0 \n1.insert \n2.delete \n3.traverse \n4.search\n");
    scanf("%d",&ch);
while(ch!=0) {
    
    switch(ch){
        case 0:printf("exit");
        exit(0);
        case 1: printf("enter the position to enter element\n1.insert an element at start \n2.insert an element at end\n3.insert an element after specified node \n\n");
        scanf("%d",&c);
            switch (c)
            {
                case 1: printf("enter data to be inserted\n");
                scanf("%d",&n);
                insert_beg(n);
                break;
            case 2: printf("enter element to be inserted \n");
                scanf("%d",&n);
                insert_end(n);
                break;
            case 3:printf("enter element to be inserted and location\n");

                scanf("%d %d",&n,&num);
                insert_after(n,num);
                break;
        
            default: printf("enter correct choice\n");
                break;
            }
        break;
        case 2:printf("\nenter the position where element has to be deleted \n1.beginning \n2.end \n3.node\n");

        scanf("%d",&c);
            switch (c)
            {
            case 1:
                del_beg();
                break;
            case 2:
                del_end();
                break;
            case 3: 
                printf("enter num to be deleted\n");
                scanf("%d",&n);
                del_num(n);
                break;
        
            default:
                printf("enter correct choice\n");
                break;
            }
        break;
        case 3:
        traversing();
        break;
        case 4:
        printf("enter the element to be searched\n");
        scanf("%d",&n);
        search(n);
        
        break;
        default:
        printf("enter correct choice\n");
        break;

        }
        printf("Enter ur choice other than 0 \n1.insert \n2.delete \n3.traverse \n4.search\n\n");
        scanf("%d",&ch);
    }
}

void insert_beg(int n)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    printf("overflow!! \n");
    
    else{
    
    newnode->data=n;
    newnode->next=head;
    head=newnode;
    printf("node inserted\n");
    }
}
void insert_end(int n)
{
    
    
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    printf("over flow!! \n");
    else{
        newnode->data=n;
        if(head==NULL)
        {
            newnode->next=NULL;
            head=newnode;
            printf("node inserted\n");
        }
        else{
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=NULL;
        }
    }
}
void insert_after(int n,int loc)
{
    
    newnode=(struct node*)malloc(sizeof(struct node));
    
    if(newnode==NULL)
    printf("over flow!! \n");
    
    else{
        
        newnode->data=n;
        temp=head;
        for(int i=0;i<loc-1;i++)
        {
            temp=temp->next;
            if(temp==NULL)
            {
                printf("cant insert\n");
                exit(0);
            }
        }
        newnode->next=temp->next;
        
        temp->next=newnode;
        printf("node inserted\n");
    
    }

}

void del_beg(){
    if(head==NULL)
    printf("empty linked list\n");
    else{
    temp=head;
    head=temp->next;
    temp->next=NULL;
    
    }
}
void del_end(){
    
    if(head==NULL)
    printf("empty\n");
    else{
        struct node *p,*q;
        p=head;
        temp=head;
        q=head;
        while(q->next!=NULL)
        {
            p=temp->next;
            q=p;

        }
        temp->next=NULL;
        free(temp);
    }
}

void del_num(int n){
    temp=head;
    if(head==NULL)
    printf("empty\n");
    else{
        struct node *p;

        while(temp->data!=n &&temp!=NULL)
        {
            p=temp;
            temp=temp->next;

        }
        if(temp==NULL)
        exit(0);

        p->next=temp->next;
        free(temp);
        
    }
}

void traversing(){
    temp=head;
    if(temp==NULL)
    printf("empty\n");
    else{
    printf("elements of linked list are\n");
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n\n");
    }

}


int search(int n)
{
    int c=0,loc=0;
    temp=head;
    if(temp==NULL)
    {
        printf("element not found\n");
        return 0;
    }
    while(temp->next!=NULL)
    {
        if(temp->data==n){
        c+=1;
        printf("element found at location %d",loc);
        }
        loc+=1;
        temp=temp->next;
    }
    if(c==0)
    printf("element cant be found \n");
    return 0;
}
