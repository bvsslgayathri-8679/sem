import java.util.*;
class Matrixmul{
    public static void main(String... arg){
        Scanner sc=new Scanner(System.in);
        int n1=sc.nextInt();
        int m1=sc.nextInt();
        int n2=sc.nextInt();
        int m2=sc.nextInt();
        int arr1[][]=new int[n1][m1];
        int arr2[][]=new int[n1][m1];
        int mul[][]=new int[n1][m2];
        if(m1==n2){
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
            for(int j=0;j<n2;j++){
                mul[i][j]=0;
                for(int k=0;k<m1;k++){
                    mul[i][j]+=arr1[i][k]*arr2[k][j];
                }
            }
        }
        for(int i=0;i<n2;i++){
            for(int j=0;j<m2;j++){
                System.out.print(mul[i][j]+" ");
            }
            System.out.println();
        }
    }
    }
}