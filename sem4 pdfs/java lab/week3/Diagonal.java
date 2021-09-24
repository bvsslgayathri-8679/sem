import java.util.Scanner;
class Diagonal{
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
     for(i=0;i<n;i++){
         for(j=0;j<m;j++)
         {
             if(i==j)
             //||(i+j)==n-1
             System.out.print(arr[i][j]);
             else 
             System.out.print("-");
         }
         System.out.println();
         
     }
    }
}


//for(int j=0;j<n;j++)
 //System.out.print(mat[j*(n+1)]+" ")
//