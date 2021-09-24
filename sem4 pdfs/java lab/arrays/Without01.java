
/**
 Write a Java program to check if an array of integers without 0 and -1.
 */
import java.util.*;
public class Without01
{
    public static void main(String... arg){
        int n,arr[]=new int[100];
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        int flag=1;
        for(int i=0;i<n;i++){
            if(arr[i]==0 || arr[i]==1){
                flag=0;
                break;
            }
            
        }
        if(flag==0){
            System.out.println("contains 0 or 1");
        }
        else
        System.out.println("no 0 and 1 ");
    }
}
