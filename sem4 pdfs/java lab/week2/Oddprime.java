import java.util.Scanner;
class Oddprime{
    public static int prime(int n){
        int i;
        for(i=2;i<=n-1;i++)
        {
            if(n%i==0)
            return 0;
        }
        return 1;
    }
    public static void main(String args[])
    {
        int i,n;
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        int arr[]=new int[n];
        for(i=0;i<n;i++){
            arr[i]=sc.nextInt();
            // if(arr[i]%2!=0){
            //     int p=prime(arr[i]);
                
            // }
        }
        System.out.println("ODD Prime numbers are ");
        for(i=2;i<n;i++){
            
            if(arr[i]%2!=0){
                int p=prime(arr[i]);
                if(p==1)
                {
                    System.out.print(arr[i]+" ");
                }
            }
        }
        
    }
}
