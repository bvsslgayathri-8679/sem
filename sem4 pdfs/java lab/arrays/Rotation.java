
/**
 Find the rotation count in a given rotated sorted array of integers
 */
import java.util.*;
public class Rotation
{
    public static void main(String... arg){
        int n,arr[]=new int[100];
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        int min=arr[0];
        int ind=0;
        for(int i=0;i<n;i++){
            if(arr[i]<min){
                ind=i;
                min=arr[i];
            }
        }
        System.out.println("No of rotations required="+ind);
    }
}
