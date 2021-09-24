
/**
  Write a Java program to compute the average value of an array of integers except the largest and smallest values.
 */
import java.util.*;
public class Avgexclarsml
{
    public static void main(String arg[])
    {
        int n,arr[]=new int[100];
        Scanner sc=new Scanner (System.in);
        n=sc.nextInt();
        int max=Integer.MIN_VALUE,min=Integer.MAX_VALUE;
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
            if(arr[i]>max)
            {
                max=arr[i];
            }
            if(arr[i]<min){
                min=arr[i];
            }
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==max||arr[i]==min)
            {
                continue;
            }
            sum+=arr[i];
        }
        System.out.println("the average value of an array of integers except the largest and smallest values is"+sum/(n-2));
    }
}
