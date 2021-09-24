
/**
  Write a Java program to count the number of possible triangles from a
  given unsorted array of positive integers.
 */
import java.util.*;
public class Triangles
{
    public static void main(String... arg){
        int n,arr[]=new int[100];
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++)
            {
                for(int k=j+1;k<n;k++){
                    if(i!=j && j!=k && k!=i && arr[i]+arr[j]>arr[k] && arr[j]+arr[k]>arr[i] && arr[k]+arr[i]>arr[j]){
                        count++;    
                    }
                }
            }
        }
        System.out.println("no of triangles are "+count);
    }
}
