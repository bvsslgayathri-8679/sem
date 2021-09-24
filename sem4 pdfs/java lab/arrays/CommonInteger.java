
/** Write a Java program to find the common elements between two arrays of integers.
 */
import java.util.Scanner;
class CommonInteger{
    public static void main(String... arg){
        int arr1[]=new int[100];
        int arr2[]=new int[100];
        int n,m;
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        m=sc.nextInt();
        for(int i=0;i<n;i++){
            arr1[i]=sc.nextInt();
        }
        for(int i=0;i<m;i++){
            arr2[i]=sc.nextInt();
        }
        System.out.println("Common elements are ");
        for(int i=0;i<n;i++){
            int k=arr1[i];
            for(int j=0;j<m;j++){
                if(arr2[j]==k){
                    System.out.print(k+" ");
                    break;
                }
            }
        }
    }
}