

/**
Write a Java program to replace each element of the array with product of every other element in a given array of integers.
 */
import java.util.*;
public class Prod1
{
    public static void main(){
        int n,arr[]=new int[100],arr1[]=new int[100],arr2[]=new int[100];
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
            arr1[i]=0;
            arr2[i]=0;
        }
        arr1[0]=1;
        for( int i=1;i<n;i++){
            arr1[i]=arr1[i-1]*arr[i-1];
        }
        arr2[n-1]=1;
        for( int i=n-2;i>=0;i--){
            arr2[i]=arr2[i+1]*arr[i+1];
        }
        System.out.println(arr2[0]);
        for(int i=0;i<n;i++){
            arr[i]=arr1[i]*arr2[i];
        }
        for(int i=0;i<n;i++){
            System.out.println(arr[i]+" ");
        }
    }
}
    

