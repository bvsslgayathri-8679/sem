import java.util.Scanner;
class Absdiff{
    public static void main(String... arg){
     int n,m,i,j;
     Scanner sc=new Scanner(System.in);
     n=sc.nextInt();
     m=sc.nextInt();
     int arr[][]=new int[n][m];
     for(i=0;i<n;i++)
     {
         for(j=0;j<m;j++)
         {
             arr[i][j]=sc.nextInt();
         }
     }
     int sum1=0,sum2=0;
     for(i=0;i<n;i++){
         for(j=0;j<m;j++)
         {
             if(i==j)
             {
             sum1+=arr[i][j];
             }
             if((i+j)==n-1)
             {
             sum2+=arr[i][j];
             } 
         }
     }
     System.out.println("diagonal sums are "+sum1+" "+sum2);
     if((sum1-sum2)>0){
            System.out.println(sum1-sum2); 
         }
     else
         System.out.println("difference is "+(sum2-sum1));
    }
}