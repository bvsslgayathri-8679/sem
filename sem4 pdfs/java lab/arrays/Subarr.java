
/**
 54. Write a Java program to check if a given array contains a subarray with 0 sum.   Go to the editor


 */
import java.util.*;
public class Subarr
{
   public static void main(String... arg){

        int n,arr[]=new int[100];
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        Set<Integer> s=new HashSet<Integer>();
        int sum=0;
        for(int i=0;i<n;i++){
        sum+=arr[i];
        if(arr[i]==0|| sum==0|| s.contains(sum)){
            System.out.println("Does the said array contain a subarray with 0 sum: true");
            System.exit(0);
        }
        s.add(sum);
        }
        System.out.println("no subarray with sum 0");
    }
}
