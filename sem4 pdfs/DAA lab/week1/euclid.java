import java.util.*;
class euclid{
    public static int gcd_euclid(int a,int b)
    {
        int rem;
        while(b%a!=0)
        {
            rem=b%a;
            b=a;
            a=rem;
        }
        return a;
    }
    
    public static void main(String args[])
    {
        int a,b;
        Scanner sc=new Scanner(System.in);
        a=sc.nextInt();
        b=sc.nextInt();
        System.out.println(gcd_euclid(a,b)+" is the gcd of "+a+" and "+b);
    }
}