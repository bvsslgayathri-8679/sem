import java.util.*;
class Binarysearch{
    public static void main(String[] arg)
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int arr[]=new int[n];
        int sk=sc.nextInt();
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        int s=0;
        int e=n-1;
        int flag=0;
        int mid=(s+e)/2;
        while(s<=e){
            if(arr[mid]==sk){
                System.out.println("search elemt found ");
                flag=1;
                break;
            }
            else if(arr[mid]>sk){
                e=mid-1;
            }
            else {
                s=mid+1;
            }
        }
        if(flag==0)
        System.out.println("Search element not found ");
    }
}