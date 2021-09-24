
int factorial(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    return f;
}
int factorial_rec(int n)
{
    if(n==0)
    return 1;
    else if(n==1)
    return 1;
    else
    {
        return n*factorial_rec(n-1);
    }
       
}
int prime(int n){
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        c+=1;
    }
    if(c==2)
    return 1;
    else
    {
        return 0;
    }
}