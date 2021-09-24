#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main(){
    int ch,n,i;
    char a[100],b[100],c[100];
    printf("enter choice\n 0.exit  1.strlen   2.strcat   3.strcpy   4.strcmp   5.strcmpi   6.strrev   7.atoi    8.atol     9.atof    10.strlwr       11.strupr\n");scanf("%d",&ch);
    while(ch!=0)
    {
        switch (ch)
        {
        case 0:
            exit(0);

            break;
        case 1:printf("enter a string\n");
        fflush(stdin);
        gets(a);
        printf("length of string is %d",strlen(a));
        break;
        case 2:printf("enter 2 strings\n");
        fflush(stdin);
        gets(a);
        fflush(stdin);
        gets(b);
        printf("concatenated string is\n");
        strcat(a,b);
        puts(a);
        break;
        case 3:
        printf("enter a string\n");
        fflush(stdin);
        gets(a);
        printf("copying!!\n");
        strcpy(b,a);
        puts(b);
        break;
        case 4:printf("enter 2 strings\n");
        fflush(stdin);
        gets(a);
        fflush(stdin);
        gets(b);
        if(!strcmp(a,b))
        {
            printf("theya re same\n");

        }
        else
        {
            printf("they are not same\n");

        }
        break;
        case 5:printf("enter 2 strings\n");
        fflush(stdin);
        gets(a);
        fflush(stdin);
        gets(b);
        i=strcmpi(a,b);
        if(i==0)
        {
            printf("theya re same\n");

        }
        else
        {
            printf("they are not same\n");

        }
        break;
        case 6:printf("enter a string\n");
        fflush(stdin);
        gets(a);
        printf("reversing!!\n");
        strrev(a);
        puts(a);
        break;
        case 7:
        printf("enter a number (int) string\n");
        fflush(stdin);
        gets(a);
        printf("number is %d\n",atoi(a));
        break;
        case 8:
        printf("enter a number (long) string\n");
        fflush(stdin);
        gets(a);
        printf("long value is %ld",atol(a));
        break;
        case 9:
        printf("enter a number (float) string\n");
        fflush(stdin);
        gets(a);
        printf("float value is %f",atof(a));

        break;
        case 10:printf("enter a string\n");
        fflush(stdin);
        gets(a);
        printf("lowercase is \n");
        strlwr(a);
        puts(a);
        break;
        case 11:printf("enter a string\n");
        fflush(stdin);
        gets(a);
        printf("uppercase is \n");
        strupr(a);
        puts(a);
        break;
        default:
            break;
        }
        printf("enter choice\n 0.exit  1.strlen   2.strcat   3.strcpy   4.strcmp   5.strcmpi   6.strrev   7.atoi    8.atol     9.atof    10.strlwr       11.strupr\n");
    scanf("%d",&ch);
    }
}