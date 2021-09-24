import java.util.*;
class P3as{
    public static int fibb(int n){
        if(n==0)
        return 0;
        else if(n==1)
        return 1;
        else
        return fibb(n-1)+fibb(n-2);
    }
    public static void main(String... arg){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        for(int i=0;i<n;i++){
            System.out.print(fibb(i)+" ");
        }
    }
}