
/**
 Write a Java program to get the difference between the largest and smallest values in an array of integers. The length of the array must be 1 and above
 */
import java.util.*;
public class Diference
{
    public static void main(String... arg){
        int n,arr[]=new int[100];
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        if(n<=1){
            System.out.println("insufficient array");
            System.exit(0);
        }
        int min=arr[0],max=arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]>max){
                max=arr[i];
            }
            if(arr[i]<min){
                min=arr[i];
            }
            
        }
        System.out.println("Difference is "+(max-min));
    }
}
