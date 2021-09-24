
/**
42. Write a Java program to segregate all 0s on left side and all 1s on right side of a given array of 0s and 1s.   Go to the editor


 */
import java.util.*;
public class LR01
{
    public static void main(String... arg){

        int n,arr[]=new int[100];
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        int s=0,e=n-1,t;
        while(s<e){
            while(arr[s]==0 && s<e){
                s++;
            }
            while(arr[e]==1 && s<e){
                e--;
            }
            if(s<e){
                t=arr[s];
                arr[s]=arr[e];
                arr[e]=t;
            }
            
        }
        System.out.print("Re arranged array is ");
        for(int i=0;i<n;i++){
            System.out.print(arr[i]+" ");
        }
    }
}
