/*java.util.array
Arrays.ToString(arr1) -->converts array to a string representation if array
Arrays.asList()  
eg: List intlist=ArrayList(arr1);  -->returns a fixed list backed by specified array.
Arrays.sort() --->sorts the array in ascending order
Arrays.binarySearch(baseArray,searchelement); -->search an element in an array

Arrays.copyOf();   -->copys the specified array

eg: int coparry=Array.copyOf(basearray,11)  ->copies the specified array ,truncated or pads zeros so that the copy has the specified length
*/



//Find sum and average of elements of an array

import java.util.*;
class Array1{
    public static void main(String args[]){
        int n,i,sum=0;
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        int arr1[]=new int[n];
        for(i=0;i<n;i++){
            arr1[i]=sc.nextInt();
        }
        for(i=0;i<n;i++){
            sum+=arr1[i];
        }
        System.out.println("sum is "+sum +" and average is " +(sum/n));//or arr1.length
        
        
    }
}
