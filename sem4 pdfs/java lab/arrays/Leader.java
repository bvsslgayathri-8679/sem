
/**
39. Write a Java program to print all the LEADERS in the array.   Go to the editor
Note: An element is leader if it is greater than all the elements to its right side.


 */
import java.util.*;
public class Leader
{
    public static void main(String... arg){
        int n,arr[]=new int[100];
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        System.out.println("LEADER elements are ");
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(arr[i]<arr[j]){
                    break;
                }
                if(j==n-1){
                    System.out.print(arr[i]+" ");
                }
            }
        }
    }
}
