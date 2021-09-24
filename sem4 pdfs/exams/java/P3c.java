import java.util.*;
class P3c{
    public static void main(String... arg){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int arr[][]=new int[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                arr[i][j]=sc.nextInt();

            }
        }
        int sum1=0,sum2=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j)
                sum1+=arr[i][j];
                if(i+j==n-1){
                    sum2+=arr[i][j];
                }
            }

        }
        if((sum1-sum2)>=0)
        System.out.println(sum1-sum2);
        else{
            System.out.println(sum2-sum1);
        }

    }
}