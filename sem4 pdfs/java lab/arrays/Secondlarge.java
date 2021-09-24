
/**
 Write a Java program to find the second largest element in an array.
 */
import java.util.Scanner;
class Secondlarge{
    public static void main(String... arg){
        int arr1[]=new int[100];
        
        int n;
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        
        for(int i=0;i<n;i++){
            arr1[i]=sc.nextInt();
        }
        
        int max1=arr1[0],max2=arr1[0];
        for(int i=1;i<n;i++){
            if(arr1[i]>max2 && max1>max2){
                max2=arr1[i];
            }
            else if(arr1[i]>max1){
                max1=arr1[i];
            }
        }
        
        System.out.print("second largest element in an array is "+max2);
        
    }
}