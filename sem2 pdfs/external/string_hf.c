#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char a[100],b[100];
void main(){
    int ch;
    printf("enter your choice\n0.exit\t1.string length\t2.string concatenation\t3.string copy\t4.string conversion strlwr\t5.strupr\n");
    scanf("%d",&ch);
    switch (ch)
    {
    case 0:exit(0);
    case 1:printf("Enter a string\n");
            fflush(stdin);
            gets(a);
            printf("Length of entered string is %d",strlen(a));
            break;
    case 2: printf("enter 2 strings\n");
            fflush(stdin);
            gets(a);
            fflush(stdin);
            gets(b);
            strcat(a,b);
            printf("Concatenated string is\n");
            puts(a);
            break;
    case 3: printf("Enter a string\n");
            fflush(stdin);
            gets(a);
            strcpy(b,a);
            printf("Copied string is \n");
            puts(b);
            break;
    case 4: printf("Enter a string\n");
            fflush(stdin);
            gets(a);
            printf("String in lower case is \n");
            puts(strlwr(a));
            break;
    case 5: printf("Enter a string\n");
            fflush(stdin);
            gets(a);
            printf("String in upper case is \n");
            puts(strupr(a));
            break;
    default: printf("Enter correct choice\n");

    
    
    }
}