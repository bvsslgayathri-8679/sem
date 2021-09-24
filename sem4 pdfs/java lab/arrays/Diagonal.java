
/**
 * Write a description of class Diagonal here.
 *
 * @author (your name)
 * @version (a version number or a date)
 */
import java.util.*;
public class Diagonal
{
    // instance variables - replace the example below with your own
    public static void main(String... arg){
        int n,m,arr[][]=new int[100][100],temp[]=new int[100];
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        m=sc.nextInt();
        ArrayList<Integer[]> list = new ArrayList<Integer[]>();

        if(n==m){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                arr[i][j]=sc.nextInt();
            }
        }
        }
        int k;
        for(int i=0;i<n;i++){
            k=0;
            for(int j=0;j<m;j++){
                if(i+j==i){
                    temp[k]=arr[i][j];
                    k+=1;
                }
                
            }
            
        }
    }
}
