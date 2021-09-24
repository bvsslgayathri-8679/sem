
/**
 Write a Java program to convert an array to ArrayList
 */
import java.util.*;
class ArraytoArrayList{
    public static void main(String... arg){
        int n,arr[]=new int[100];
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        ArrayList<Integer> arr1=new ArrayList<Integer>();
        for(int i=0;i<n;i++){
            arr1.add(new Integer(arr[i]));
        }
        System.out.println("array to ArrayList");
        System.out.println(arr1);
    }
}