import java.util.Scanner;
class Linearsearch{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter size of array");
        int n=sc.nextInt();
        System.out.println("Enter search element");
        int sear=sc.nextInt();
        int arr[]=new int[n];
        int i,flag;
        System.out.println("Enter array elements");
        for(i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        for(i=0;i<n;i++){
            if(sear==arr[i]){
                break;
            }
            if(i==n-1){
                System.out.println("Element not found");
                return ;
            }
        }
        System.out.println("element found at index "+i);
        
        
        
    }
}
