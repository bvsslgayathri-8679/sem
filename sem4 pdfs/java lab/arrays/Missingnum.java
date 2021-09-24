/*Write a Java program to find a missing number in an array.*/
import java.util.*;
import java.io.*;
class Missingnum{
    public static void main(String... arg)
    {
        int n;
        int arr[]=new int[100];
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        int sum,sum1=0;
        sum=sc.nextInt();
        for(int i=0;i<n;i++){
            sum1+=arr[i];
        }
        if(sum1==sum){
            System.out.println("no missing element");
            
        }
        else{
            System.out.println("missing element is "+(sum-sum1));
        }
    }
}