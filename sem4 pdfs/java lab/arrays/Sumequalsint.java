
/**
 Find the sum of the two elements of a given array which is equal to a given integer
 */
import java.util.*;
public class Sumequalsint
{
    public static void main(String... arg){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int arr[]=new int[100];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        
        int ele=sc.nextInt();
        for(int i=0;i<n;i++){
            int k=ele-arr[i];
            for(int j=0;j<n;j++){
                if(j!=i && arr[j]==k){
                    System.out.println("Numbers are "+arr[i]+" "+arr[j]+" and their indices are "+j+" "+i);
                    break;
                }
            }
        }
    }
}
