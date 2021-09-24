
import java.util.*;
class Matrix_mul{
    public static void main(String args[])
    {
        int n1,m1,n2,m2,i,j,k;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter row size and column size of 2 matrices");
        n1=sc.nextInt();
        m1=sc.nextInt();
        n2=sc.nextInt();
        m2=sc.nextInt();
        if(m1!=n2){
            System.out.println("Can't multiply the 2 matrices");
            return ;
        }
        int arr1[][]=new int[n1][m1];
        int arr2[][]=new int[n2][m2];
        int mul[][]=new int[n1][n2];
        System.out.println("Enter elements of matrix 1");
        for(i=0;i<n1;i++){
            {
                for(j=0;j<m1;j++){
                    arr1[i][j]=sc.nextInt();
                }
            }
        }
        System.out.println("Enter elements of matrix 2");

        for(i=0;i<n2;i++){
            {
                for(j=0;j<m2;j++){
                    arr2[i][j]=sc.nextInt();
                }
            }
        }
        System.out.println("product of both the matrices is ");
        for(i=0;i<n1;i++){
            {
                for(j=0;j<m2;j++){
                    mul[i][j]=0;
                    for(k=0;k<m1;k++)
                    {
                        mul[i][j]+=arr1[i][k]*arr2[k][j];
                    }
                System.out.print(mul[i][j]+"  ");   
                }
                System.out.println();
            }     
        }  
    }
}