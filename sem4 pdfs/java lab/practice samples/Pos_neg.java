import java.util.Scanner;
class Pos_neg{
    public static void main(String arg[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        if(n>0){
            System.out.println(n+" is positive number");
            
        }
        else if(n==0)
        System.out.println("number is zeero");
        else
        System.out.println(n+" is negative number");
        
    }
}