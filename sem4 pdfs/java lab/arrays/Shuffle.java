
/**
Write a Java program to shuffle a given array of integers.
 */
import java.util.*;
public class Shuffle
{
    public static int[] Swap(int arr[],int i,int j){
        int t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
        return arr;
    }
    public static void main(String... arg){
        int n,arr[]=new int[100];
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        
        for(int i=0;i<n;i++){
            Random rand=new Random();
            int j=rand.nextInt(n-i)+i;
            Swap(arr,i,j);
            
        }
        for(int i=0;i<n;i++){
            System.out.print(arr[i]+" ");
        }
    }
    
        
}
