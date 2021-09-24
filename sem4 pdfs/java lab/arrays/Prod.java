
/**
Write a Java program to replace each element of the array with product of every other element in a given array of integers.
 */
import java.util.*;
public class Prod
{
    public static void main(String... arg){
        int n,arr[]=new int[100],arr1[]=new int[100];
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        for( int i=0;i<n;i++){
            int p=1;
            for(int j=0;j<n;j++){
                if(i!=j){
                    p*=arr[j];
                }
            }
            arr1[i]=p;
        }
        System.out.println("Array elements are: ");
        for(int i=0;i<n;i++){
            System.out.print(arr1[i]+" ");
        }
    }
    
}
