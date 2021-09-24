import java.util.*;
public class Week3a
{
 public static void main(String... s)
 {
 Scanner sc = new Scanner(System.in);
 System.out.print("Enter order of the array: ");
 int d = sc.nextInt();
 int[] mat = new int[d*d];
 System.out.print("Enter the elements: ");
 for(int i=0;i<d*d;i++) 
 mat[i] = sc.nextInt();
 System.out.print("Diagonal elements: ");
 for(int j=0;j<d;j++)
 System.out.print(mat[j*(d+1)]+" ");
 }
}