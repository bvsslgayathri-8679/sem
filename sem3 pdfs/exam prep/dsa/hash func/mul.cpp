#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,n,size,key;
    cin>>n;
    int arr[n];
    int hash1[100]={0};
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        key=100*((arr[i]*0.618033)-floor(arr[i]*0.618033));

        if(hash1[key]!=0)
        cout<<"collission ";
        else
        {
            hash1[key]=arr[i];
            cout<<hash1[key]<<" "<<key<<endl;
        }
    }
}

/* 

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int val[20],key,*hash_table,ch=1,i=0,count=0;
    float a;
    hash_table=(int *)calloc(100,sizeof(int));
   while(ch)
   {
       cin>>val[i];
       count++;
       cout<<"do you want to continue";
       cin>>ch;
       i++;
   }
   for(i=0;i<count;i++)
   {                                               //h(k)=floor(m(kAmod1))
       a=(val[i]*0.618033)-floor(val[i]*0.618033); //Where "k A mod 1" means the fractional part of k A, that is, k A -⌊k A⌋.
       key=floor(100*a);   
       if(hash_table[key]!=0)
       {
           cout<<"collision occured at"<<key<<"index";
       }
       else
       {
       hash_table[key]=val[i];
       cout<<val[i]<<"is inserted at"<<floor(100*a)<<"position"<<endl;
       }
   }
    return 0;
} */