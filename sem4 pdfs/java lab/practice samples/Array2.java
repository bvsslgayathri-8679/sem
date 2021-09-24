import java.util.*;
class Array2{
    public static int find_index(int arr1[],int n){
        int i=0;
        while(i<arr1.length){
            if(arr1[i]==n){
                return i;
            }
            i+=1;
        }
        return -1;
        
    }
    public static void main(String args[]){
        int n,i;
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        int arr1[]=new int[n];
        for(i=0;i<n;i++){
            arr1[i]=sc.nextInt();
        }
        int s=sc.nextInt();
        System.out.println("Index of element "+s+" is "+ find_index(arr1,s));
        
        
        
    }
    
}

