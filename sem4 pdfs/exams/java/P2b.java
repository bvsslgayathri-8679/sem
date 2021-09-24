import java.util.*;
class P2b{
    public static int prime(int r){
        for(int i=2;i<=Math.sqrt(r);i++){
            if(r%i==0){
                return 0;
            }
        }
        return 1;
    }
    public static void main(String... arg){
        Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n ;i++){
            arr[i]=sc.nextInt();
            
        }
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                
                continue;
            }   

            int r=prime(arr[i]);
            if(r==1)
            System.out.println(arr[i]);
        }
    }
}