
#include <iostream>
#include<stdlib.h>
int fibfun(int);
using namespace std;
int main()
{
int fib[100],arr[100];
int check=0,offset=0,n;
int i,search,l,m1,m2,fibm,index;
cout<<"enter no.of elements to search"<<endl;
cin>>n;
cout<<"Enter elements for search"<<endl;
for(i= 0;i<n;i++)
    cin>>arr[i];
cout<<"Enter Element to Search : "<<endl;
cin>>search;
i=0;
while(1)
{
fib[i]=fibfun(i+1);
if(fib[i]>=n)
    break;
i++;
}
fibm=fib[i];
int z;
while(z<=n)
{
m1=fib[i-1];
m2=fib[i-2];
l=offset+m2;
if (l<n)
index=l;
else
index=n;
if (search==arr[index])
{
check=1;
cout<<"element found at index "<<index;
break;
}
if (search<arr[index])
{
i=i-2;
fibm=fib[i];
}
else if (search>arr[index])
{
i=i-1;
fibm=fib[i];
offset=index;
}
z+=1;
}
if (check==0)
printf("element not found");
}
int fibfun(int n)
{
if (n==1)
return 0;
if (n==2)
return 1;
if (n>2)
return fibfun(n-1)+fibfun(n-2);
}
