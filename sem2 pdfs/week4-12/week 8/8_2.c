#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char a[100],b[100],c[100];
int length(char[100]);
void copy();
void reverse();
int compare();
void concatenate();
void main(){
    int ch,len,res;
    printf("enter choice\n 0.exit 1. To find the length of the given string 2. To copy the contents of one string to another 3. To reverse the contents of a string 4. To compare two strings 5. To concatenate two strings\n");
    scanf("%d",&ch);
    while (ch!=0)
    {
        switch(ch)
        {
            case 0:exit(0);
            case 1:
            printf("enter a string\n");
            fflush(stdin);
            gets(a);
            len=length(a);
            printf("length of string is %d",len);
            break;
            case 2:
            fflush(stdin);
            copy();
            break;
            case 3: reverse();
            break;
            case 4:
            printf("enter 2 strings\n");
            fflush(stdin);
            gets(a);
            fflush(stdin);
            gets(b);
            res=compare();
            if(res==1)
            printf("they are sme");
            else
            {
                printf("they are different");
            }
            break;
            case 5:
            printf("enter 2 strings\n");
            fflush(stdin);
            gets(a);
            fflush(stdin);
            gets(b);
            concatenate();
            break;
            
            default:break;
            

        }
        printf("enter choice\n 0.exit 1. To find the length of the given string 2. To copy the contents of one string to another 3. To reverse the contents of a string 4. To compare two strings 5. To concatenate two strings\n");
        scanf("%d",&ch);
        
    }
    
}
int length(char a[100]){
    int i=0;
    
    while(a[i]!='\0')
    {
        i+=1;

    }
    return i;
}

void copy(){
    printf("enter a string\n");
    fflush(stdin);
    gets(a);
    int len=length(a);
    
    for(int i=0;i<len;i++)
    {
        c[i]=a[i];
    }
    c[len]='\0';
    printf("string copied is !! ");
    puts(c);

}

void reverse(){
    printf("enter a string\n");
    fflush(stdin);
    gets(a);
    int len=length(a);
    int k=0;
    for(int i=len-1;i>=0;i--)
    {
        c[k]=a[i];
        k+=1;
        
    }
    c[len]='\0';
    
    printf("reversed string is\n");
    fflush(stdin);
    puts(c);


}

int compare(){
    int l1=length(a);
    int l2=length(b);
    
    if(l1!=l2)
    return 0;
    if(l1==l2){
    int s=1;
    int i=0;
    
    while (a[i]!='\0')
    {
        if(a[i]==b[i])
        continue;
        else
        {
            return 0;
        }
        
    }
    
        return s;
    }
    

}
void concatenate(){
    int l1=length(a);
    int l2=length(b);
    int i;
    for(i=0;i<l1;i++)
    {
        a[i]=a[i];
    }
    i--;
    
    
    for(int j=0;j<l2;j++)
    {
        i++;
        a[i]=b[j];
        
       
    }
    
    a[i+1]='\0';
    printf("concatenated string is \n");
    puts(a);
}


