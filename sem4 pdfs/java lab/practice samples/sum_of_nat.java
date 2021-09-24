import java.util.Scanner;
class sum_of_nat{
    public static void main(String arg[])
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int sum=0;
        for(int i=0;i<=n;i++)
        {
          sum+=i;          
        }
        System.out.println(sum+" is sum of "+n+" natural numbers for loop");
        int i=0;
        sum=0;
        while(i<=n){
            sum+=i;
            i++;
        }
        System.out.println(sum+" is sum of "+n+" natural numbers while loop");
        i=0;
        sum=0;
        do{
            sum+=i;
            i++;
        }while(i<=n);
        System.out.println(sum+" is sum of "+n+" natural numbers do while loop");
    }
}