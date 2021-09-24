import java.util.*;
class Addition{
    public static void main(String... arg){
        Scanner sc=new Scanner(System.in);
        int n1=sc.nextInt();
        int m1=sc.nextInt();
        int n2=sc.nextInt();
        int m2=sc.nextInt();
        int arr1[][]=new int[n1][m1];
        int arr2[][]=new int[n1][m1];
        int add[][]=new int[n1][m2];
        if(m1==m2 && n1==n2){
        for(int i=0;i<n1;i++){
            for(int j=0;j<m1;j++){
                arr1[i][j]=sc.nextInt();
            }
        }
        for(int i=0;i<n2;i++){
            for(int j=0;j<m2;j++){
                arr2[i][j]=sc.nextInt();
            }
        }
        for(int i=0;i<n1;i++){
            for(int j=0;j<m1;j++){
                add[i][j]=arr1[i][j]+arr2[i][j];   
            }
        }
        for(int i=0;i<n2;i++){
            for(int j=0;j<m2;j++){
                System.out.print(add[i][j]+" ");
            }
            System.out.println();
        }
    }
    }
    
}