import java.util.Scanner;
class Binarysearch{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter size of array");
        int n=sc.nextInt();
        System.out.println("Enter search element");
        int sear=sc.nextInt();
        int arr[]=new int[n];
        int s=0,e=n-1,m,i,flag;
        System.out.println("Enter array elements");
        for(i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        m=(s+e)/2;
        while(s<=e){
            if(arr[m]==sear){
                System.out.println("element found at index "+m);
                break;

            }
            else if(sear>arr[m])
            {
                s=m+1;
            }
            else if(sear<arr[m]){
                e=m-1;
            }
            m=(s+e)/2;
        }
        if(s>e){
            System.out.println("Search element not found");
        }
        
    }
}