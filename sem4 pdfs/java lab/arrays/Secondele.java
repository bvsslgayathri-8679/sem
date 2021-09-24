
/**
  Write a Java program to rearrange a given array of unique elements such that every second element of the array is greater than its left and right elements.
 */
import java.util.*;
public class Secondele
{
    public static void main(String... arg){
        int n,arr[]=new int[100];
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        int t;
        for(int i=1;i<n;i+=2){
        if(arr[i]<arr[i-1]){
            t=arr[i];
            arr[i]=arr[i-1];
            arr[i-1]=t;
        }
        if(arr[i]<arr[i+1]){
            t=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=t;
        }
        }
        for(int i=0;i<n;i++){
            System.out.print(arr[i]+" ");
        }
    }
}
