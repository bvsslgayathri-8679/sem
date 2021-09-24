
/**
 Write a Java program to find all combination of four elements 
 of a given array whose sum is equal to a given value
 */
import java.util.*;
public class Sum4
{
    public static void main(String... arg){
        int n,arr[]=new int[100];
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        int ele=sc.nextInt();
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++)
                {
                    for(int l=k+1;l<n;l++){
                    if(arr[i]+arr[j]+arr[k]+arr[l]==ele){
                        System.out.println("Comb "+arr[i]+" "+arr[j]+" "+arr[k]+" "+arr[l]);
                    }
                
                    }
                }
            
            }
        }
    }
}
