
/**
Write a Java program to find all the unique triplets such that sum of all the three elements [x, y, z (x ≤ y ≤ z)] equal to a specified number.
Sample array: [1, -2, 0, 5, -1, -4]
Target value: 2. 
 */
import java.util.*;
public class Trplets
{
    public static void main(String... arg){
        int n,arr[]=new int[100];
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        ArrayList<List<Integer>> list=new ArrayList<List<Integer>>();
        int tar=sc.nextInt();
        for(int i=0;i<n;i++){
            for(int j =i;j<n;j++){
                for(int k=j;k<n;k++){
                    ArrayList<Integer> list2=new ArrayList<Integer>();
                    if(i!=j &&j!=k && k!=i && arr[i]+arr[j]+arr[k]==tar){
                        list2.add(arr[i]);
                        list2.add(arr[j]);
                        list2.add(arr[k]);
                        list.add(list2);
                    }
                    
                }
            }
        }
        System.out.println(list);
        for(List<Integer> i:list){
            System.out.println(i);
        }
    }
}

