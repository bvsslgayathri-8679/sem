
import java.util.Scanner;
class Week3_b{
    public static void main(String... arg){
        Scanner sc=new Scanner(System.in);
        int m=sc.nextInt();
        int n=sc.nextInt();
        int years[]=new int[m];
        int itemid[]=new int[n];
        System.out.println("enter the years");
        for(int i=0;i<m;i++){
            years[i]=sc.nextInt();
        }
        System.out.println("enter the item ids ");
        for(int i=0;i<n;i++){
            itemid[i]=sc.nextInt();
        }
        int arr[][]=new int[2022][2022];
        System.out.println("enter the no of items sold");
        for(int i:years){
            for(int j:itemid){
                arr[i][j]=sc.nextInt();
            }
        }
        int mdemand=arr[m-1][n-1];
        int dyear=years[m-1];
        int did=itemid[n-1];
        for(int i:years){
            for(int j:itemid){
                if(arr[i][j]>mdemand){
                    mdemand=arr[i][j];
                    dyear=i;
                    did=j;
                }
            }
        }
        System.out.println("Item id "+did+" has max demand of "+mdemand+" in year "+dyear);
        
        
    }
}