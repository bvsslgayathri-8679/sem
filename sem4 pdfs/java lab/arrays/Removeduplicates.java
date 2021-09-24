
/**
 Write a Java program to remove duplicate elements from an array.
 */
import java.util.Scanner;
class Removeduplicates{
    public static void main(String... arg){
        int arr1[]=new int[100];
        
        int n;
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        
        for(int i=0;i<n;i++){
            arr1[i]=sc.nextInt();
        }
        
        for(int i=0;i<n;i++){
            int k=arr1[i];
            for(int j=i+1;j<n;j++){
                if(arr1[j]==k){
                    arr1[j]=arr1[n-1];
                    n--;
                    j--;
                }
            }
        }
        System.out.println("Array without duplicates ");
        for(int i=0;i<n;i++){
            System.out.print(arr1[i]+" ");
        }
    }
}